//Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.
//
//For example,
//Given 1->2->3->3->4->4->5, return 1->2->5.
//Given 1->1->1->2->3, return 2->3.


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

ListNode *deleteDuplicates(ListNode *head) {
	if (!head || !head->next) return head;
	ListNode *result = NULL; ListNode **p = &result;
	while (head)
	{
		if (head->next && head->val==head->next->val)
		{
			int temp = head->val;
			while (head && head->val == temp)
				head = head->next;
		}
		else
		{
			*p = head; p = &((*p)->next);
			head = head->next;
		}
		
	}
	*p = NULL;
	return result;
}


void main()
{

}