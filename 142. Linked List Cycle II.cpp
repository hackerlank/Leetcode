//Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
//
//Note: Do not modify the linked list.
//
//	Follow up :
//	  Can you solve it without using extra space ?

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

class Solution {
public:
	ListNode *detectCycle(ListNode *head) {
		if (!head || !head->next)
			return NULL;
		ListNode *fast = head, *slow = head, *entry = head;
		while (slow->next && fast->next && fast->next->next)
		{
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast)
			{
				while (slow != entry)
				{
					slow = slow->next;
					entry = entry->next;
				}
				return entry;
			}
		}
		return NULL;
	}
};

void main()
{

}