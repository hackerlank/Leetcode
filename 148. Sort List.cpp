//Sort a linked list in O(n log n) time using constant space complexity.
//
//Subscribe to see which companies asked this question

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <stack>
#include <map>
#include <list>

using namespace std;


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

};

ListNode *merge(ListNode *head, ListNode *head2)
{
	ListNode *result = new ListNode(-1), *var = result;
	while (head || head2)
	{
		if (head && (!head2 || head->val <= head2->val))
		{
			var->next = head;
			head = head->next;
			var = var->next;
		}
		if (head2 && (!head || head2->val < head->val))
		{
			var->next = head2;
			head2 = head2->next;
			var = var->next;
		}
		


	}
	var->next = nullptr;
	return result->next;
}

ListNode* sortList(ListNode* head) {
	if (!head || !head->next)
		return head;
	ListNode *fast = head->next, *slow = head, *head2 = nullptr;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	head2 = slow->next;
	slow->next = nullptr;
	return merge(sortList(head), sortList(head2));

}


void main()
{
	ListNode *test = new ListNode(3);
	test->next = new ListNode(2);
	test->next->next = new ListNode(4);
	sortList(test);

}