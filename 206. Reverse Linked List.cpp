//Reverse a singly linked list.
//
//click to show more hints.
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


ListNode* reverseList(ListNode* head) {
	ListNode* pre = NULL;
	while (head) {
		ListNode* next = head->next;
		head->next = pre;
		pre = head;
		head = next;
	}
	return pre;
}


void main()
{
	ListNode *test = new ListNode(1);
	test->next = new ListNode(2);
	test->next->next = new ListNode(3);
	test->next->next->next = new ListNode(4);
	reverseList(test);
}