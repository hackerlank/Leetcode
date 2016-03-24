//Reverse a linked list from position m to n.Do it in - place and in one - pass.
//
//For example :
//Given 1->2->3->4->5->NULL, m = 2 and n = 4,
//
//return 1->4->3->2->5->NULL.
//
//Note :
//	 Given m, n satisfy the following condition :
//1 ≤ m ≤ n ≤ length of list.

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <stack>
#include <map>

using namespace std;


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};


ListNode* reverseBetween(ListNode* head, int m, int n) {
	ListNode *newhead = new ListNode(0), *p = newhead, *cur,*temp;
	newhead->next = head;
	for (int i = 0; i < m - 1; ++i)
		p = p->next;
	cur = p->next;
	for (int i = 0; i < n - m; ++i)
	{
		temp = cur->next;
		cur->next = temp->next;
		temp->next = p->next;
		p->next = temp;
	}
	return newhead->next;
}



void main()
{
	ListNode *test = new ListNode(3);
	test->next = new ListNode(5);
	reverseBetween(test, 1, 2);
}