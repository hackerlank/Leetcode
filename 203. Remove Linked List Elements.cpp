//Remove all elements from a linked list of integers that have value val.
//
//Example
//Given : 1 -- > 2 -- > 6 -- > 3 -- > 4 -- > 5 -- > 6, val = 6
//	Return: 1 -- > 2 -- > 3 -- > 4 -- > 5
//
//		Credits:
//Special thanks to @mithmatt for adding this problem and creating all test cases.
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

class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
		ListNode *pseudo_head = new ListNode(0);
		pseudo_head->next = head;
		ListNode *cur = pseudo_head;
		while (cur){
			if (cur->next && cur->next->val == val)   cur->next = cur->next->next;
			else    cur = cur->next;
		}
		return pseudo_head->next;
	}
};


void main()
{

}