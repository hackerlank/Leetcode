//Given a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.
//
//You should preserve the original relative order of the nodes in each of the two partitions.
//
//For example,
//Given 1->4->3->2->5->2 and x = 3,
//return 1->2->2->4->3->5.


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
	ListNode* partition(ListNode* head, int x) {
		ListNode *left = new ListNode(-1), *right = new ListNode(-1), *p = left, *q = right;
		while (head)
		{
			if (head->val < x)
			{
				p->next = head;
				p = p->next;
			}
			else
			{
				q->next = head;
				q = q->next;
			}
			head = head->next;
		}
		q->next = NULL;
		p->next = right->next;
		return left->next;



	}
};


void main()
{
	
}