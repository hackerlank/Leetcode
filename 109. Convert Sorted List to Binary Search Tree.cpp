//Given a singly linked list where elements are sorted in ascending order, convert it to a height balanced BST.


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


struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};



class Solution {
public:
	TreeNode* sortedListToBST(ListNode* head) {
		if (!head)
			return nullptr;
		int total = 0;
		ListNode *temp = head;
		while (temp)
		{
			++total;
			temp = temp->next;
		}
		return recursive(head, total);

	}
	TreeNode *recursive(ListNode *head, int total)
	{
		if (total <= 0)
			return nullptr;
		ListNode *temp = head;
		for (int i = 0; i < total / 2; ++i)
			temp = temp->next;
		TreeNode *root = new TreeNode(temp->val);
		root->left = recursive(head, total / 2);
		root->right = recursive(temp->next, total - total / 2 - 1);


		return root;
	}
};



void main()
{

}