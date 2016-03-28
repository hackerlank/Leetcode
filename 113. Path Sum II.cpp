//Given a binary tree and a sum, find all root - to - leaf paths where each path's sum equals the given sum.
//
//For example :
//Given the below binary tree and sum = 22,
//5
/// \
//4   8
/// / \
//11  13  4
/// \ / \
//7    2  5   1
//return
//[
//	[5, 4, 11, 2],
//	[5, 8, 4, 5]
//]


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


void hasPathSum(TreeNode* root, int sum, vector<int> &temp, vector<vector<int>> &result) {
	if (!root)
		return;
	temp.push_back(root->val);
	if (root->val == sum && !root->left && !root->right)
	{
		result.push_back(temp);
		temp.pop_back();
		return;
	}
	hasPathSum(root->left, sum - root->val, temp, result);
	hasPathSum(root->right, sum - root->val, temp, result);
	temp.pop_back();
}

vector<vector<int>> pathSum(TreeNode* root, int sum) {
	vector<vector<int>> result;
	vector<int> temp;
	if (!root)
		return result;
	hasPathSum(root, sum, temp, result);
	return result;

}


void main()
{
	TreeNode *test = new TreeNode(0);
	test->left = new TreeNode(1);
	test->right = new TreeNode(1);
	pathSum(test, 1);

}