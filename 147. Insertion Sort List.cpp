//Sort a linked list using insertion sort.
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



ListNode *insertionSortList(ListNode *head) {
	if (!head)
		return nullptr;
	ListNode *result = new ListNode(-1);
	while (head)
	{
		ListNode *preuslt = result;
		ListNode *next = head->next;
		while (preuslt->next && preuslt->next->val<head->val)
			preuslt = preuslt->next;
		head->next = preuslt->next;
		preuslt->next = head;
		head = next;
	}
	return result->next;
}


void main()
{
	ListNode *test = new ListNode(5);
	insertionSortList(test);
	test->next = new ListNode(3);
	test->next->next = new ListNode(7);
	test->next->next->next = new ListNode(4);
	test->next->next->next->next = new ListNode(2);
	insertionSortList(test);
}