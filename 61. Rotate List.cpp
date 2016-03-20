//Given a list, rotate the list to the right by k places, where k is non - negative.
//
//For example :
//Given 1->2->3->4->5->NULL and k = 2,
//return 4->5->1->2->3->NULL.

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
using namespace std;

class Solution {
public:
	ListNode* rotateRight(ListNode* head, int k) {
		if (!head) return head;
		int len = 1; ListNode *newhead = head, *var = head;
		while (var->next)
		{
			++len;
			var = var->next;
		}
		var->next = head;
		if (k %= len)
		{
			for (int i = 0; i < len - k; ++i)
			{
				var = var->next;
			}
		}
		newhead = var->next;
		var->next = NULL;
		return newhead;



	}
};

void main()
{
	cout<<getPermutation(3, 6);
}