//Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target ? Find all unique quadruplets in the array which gives the sum of target.
//
//Note :
//	 Elements in a quadruplet(a, b, c, d) must be in non - descending order. (ie, a ¡Ü b ¡Ü c ¡Ü d)
//	 The solution set must not contain duplicate quadruplets.
//	 For example, given array S = { 1 0 - 1 0 - 2 2 }, and target = 0.
//
//	 A solution set is :
//(-1, 0, 0, 1)
//(-2, -1, 1, 2)
//(-2, 0, 0, 2)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct ListNode 
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) 
{
	if (!head)
		return NULL;
	ListNode *temp = new ListNode(-1);
	temp->next = head;
	ListNode *p = temp, *q = temp;
	for (int i = 0; i < n; ++i)
		p = p->next;
	while (p->next)
	{
		p = p->next;
		q = q->next;
	}
	ListNode *toBeDelete = q->next;
	q->next = q->next->next;
	delete toBeDelete;
	return temp->next;
}
void main()
{
	ListNode *t = new ListNode(0);
	t->next = new ListNode(1);
	t->next->next = new ListNode(2);
	t->next->next->next = new ListNode(3);
	ListNode *res= removeNthFromEnd(t,3);
}