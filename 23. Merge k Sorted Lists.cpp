//Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.


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


ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
	if (l1 == NULL) return l2;
	if (l2 == NULL) return l1;
	ListNode *temp = new ListNode(-1);
	ListNode *result = temp;
	while (l1 && l2)
	{
		if (l1->val < l2->val)
		{
			temp->next = new ListNode(l1->val);
			l1 = l1->next;
		}
		else
		{
			temp->next = new ListNode(l2->val);
			l2 = l2->next;
		}
		temp = temp->next;


	}
	if (l1 == NULL)
	{
		while (l2)
		{
			temp->next = new ListNode(l2->val);
			temp = temp->next;
			l2 = l2->next;
		}
	}
	if (l2 == NULL)
	{
		while (l1)
		{
			temp->next = new ListNode(l1->val);
			temp = temp->next;
			l1 = l1->next;
		}
	}
	return result->next;
}

ListNode* mergeKLists(vector<ListNode*>& lists) {
	if (lists.empty()) return NULL;
	int len = lists.size();
	while (len > 1)
	{
		for (int i = 0; i < len / 2; ++i)
			lists[i] = mergeTwoLists(lists[i], lists[len - i - 1]);
		len = (len + 1) / 2;
	}
	return lists.front();

}


void main()
{
	vector<ListNode*> test;
	ListNode* a = NULL;
	test.push_back(a);
	ListNode*b = new ListNode(1);
	test.push_back(b);
	mergeKLists(test);
}