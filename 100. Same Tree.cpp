//Given two binary trees, write a function to check if they are equal or not.
//
//Two binary trees are considered equal if they are structurally identical and the nodes have the same value.

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


struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};

bool check(TreeNode *p, TreeNode *q)
{
	if ((p && !q) || (!p && q))
		return false;
	if (!p && !q)
		return true;
	if (p && q)
		if (p->val==q->val)
			return check(p->left, q->left) && check(p->right, q->right);
		else
			return false;
}

bool isSameTree(TreeNode* p, TreeNode* q) {
	return check(p, q);
}




void main()
{
	TreeNode *a = new TreeNode(0);
	TreeNode *b = new TreeNode(1);
	cout << isSameTree(a, b);
}