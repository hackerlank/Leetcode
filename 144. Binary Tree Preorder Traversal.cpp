//Given a binary tree, return the preorder traversal of its nodes' values.
//
//For example :
//Given binary tree{ 1, #, 2, 3 },
//1
//\
//2
///
//3
//return[1, 2, 3].

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


void recursive(TreeNode* root,vector<int> &result)
{
	if (!root)
		return;
	result.push_back(root->val);
	if (root->left)
		recursive(root->left, result);
	if (root->right)
		recursive(root->right, result);
}

vector<int> preorderTraversal2(TreeNode* root) {
	if (!root)
		return vector<int>();
	vector<int> result;
	recursive(root, result);
	return result;
}

vector<int> preorderTraversal(TreeNode* root) {
	if (!root)
		return vector<int>();
	stack<TreeNode *> s;
	vector<int> result;
	s.push(root);
	while (!s.empty())
	{
		TreeNode *temp = s.top();
		result.push_back(temp->val);
		s.pop();
		if (temp->right)
			s.push(temp->right);
		if (temp->left)
			s.push(temp->left);
	}
	return result;
}
void main()
{
	TreeNode *test = new TreeNode(1);
	test->left = new TreeNode(2);
	preorderTraversal(test);
}