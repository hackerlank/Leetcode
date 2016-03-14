//Given a linked list, swap every two adjacent nodes and return its head.
//
//For example,
//Given 1->2->3->4, you should return the list as 2->1->4->3.
//
//Your algorithm should use only constant space.You may not modify the values in the list, only nodes itself can be changed.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;


struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* swapPairs(ListNode* head)
{
	if (!head || !head->next)
		return head;
	ListNode *a = head, *b = head->next;
	ListNode *core = new ListNode(-1), *result = core;
	while (1)
	{
		core->next = new ListNode(b->val);
		core->next->next = new ListNode(a->val);
		core = core->next->next;
		if (a->next->next==NULL)
			return result->next;
		if (a->next->next->next==NULL)
		{
			core->next = a->next->next;
			return result->next;
		}
		a = a->next->next;
		b = b->next->next;
	}
	return result->next;
}
void main()
{
	ListNode *test = new ListNode(0);
	//swapPairs(test);
	test->next = new ListNode(1);
	swapPairs(test);
	test->next->next = new ListNode(2);
	swapPairs(test);
}