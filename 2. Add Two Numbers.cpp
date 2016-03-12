//You are given two linked lists representing two non - negative numbers.The digits are stored in reverse order and each of their nodes contain a single digit.Add the two numbers and return it as a linked list.
//
//Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
//   Output : 7 -> 0 -> 8

#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode *temp = new ListNode(0);
	ListNode *r = temp;
	ListNode *pre;
	int carry = 0;
	while (l1 != NULL || l2 != NULL || carry)
	{
		if (l1 != NULL && l2 != NULL)
		{
			carry = l1->val + l2->val + carry;
			l1 = l1->next;
			l2 = l2->next;
		}
		else if (l2 == NULL && l1 != NULL)
		{
			carry = l1->val + carry;
			l1 = l1->next;
		}
		else if (l1 == NULL && l2 != NULL)
		{
			carry = l2->val + carry;
			l2 = l2->next;
		}
		temp->val = carry % 10;
		carry /= 10;
		temp->next = new ListNode(0);
		pre = temp;
		temp = temp->next;

	}
	if (temp->val==0)
	{
		pre->next = NULL;
	}
	return r;
}

//ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
//{
//	l1 = l1;
//	l2 = l2;
//	ListNode *sum = new ListNode(0), *cur = sum, *pre;
//	while (l1 != NULL && l2 != NULL) {
//		cur->val += l1->val + l2->val;
//		cur->next = new ListNode(cur->val / 10);
//		cur->val = cur->val % 10;
//		l1 = l1->next; l2 = l2->next;
//		pre = cur; cur = cur->next;
//	}
//	while (l1 != NULL) {
//		cur->val += l1->val;
//		cur->next = new ListNode(cur->val / 10);
//		cur->val = cur->val % 10;
//		l1 = l1->next; pre = cur; cur = cur->next;
//	}
//	while (l2 != NULL) {
//		cur->val += l2->val;
//		cur->next = new ListNode(cur->val / 10);
//		cur->val = cur->val % 10;
//		l2 = l2->next; pre = cur; cur = cur->next;
//	}
//	if (cur->val == 0) {
//		pre->next = NULL; delete cur;
//	}
//	return sum;
//}

void main()
{
	ListNode * a = new ListNode(3);
	a->next = new ListNode(7);
	ListNode *b = new ListNode(2);
	b->next = new ListNode(9);
//	ListNode * a = new ListNode(0);
//  ListNode *b = new ListNode(0);
	ListNode *c = addTwoNumbers(a, b);
}