//Given a sorted linked list, delete all duplicates such that each element appear only once.
//
//For example,
//Given 1->1->2, return 1->2.
//Given 1->1->2->3->3, return 1->2->3.


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


class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (!head || !head->next)
			return head;
		ListNode *p = head;
		while (p && p->next)
		{
			if (p->val == p->next->val)
				p->next = p->next->next;
			else
				p = p->next;


		}
		return head;



	}
};


void main()
{
	ListNode *test = new ListNode(1);
	test->next = new ListNode(1);
	test->next->next = new ListNode(1);
	deleteDuplicates(test);
}