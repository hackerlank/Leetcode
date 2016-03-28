//Given a binary tree and a sum, determine if the tree has a root - to - leaf path such that adding up all the values along the path equals the given sum.
//
//For example :
//Given the below binary tree and sum = 22,
//5
/// \
//4   8
/// / \
//11  13  4
/// \      \
//7    2      1
//return true, as there exist a root - to - leaf path 5->4->11->2 which sum is 22.
//

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

bool hasPathSum(TreeNode* root, int sum) {
	if (!root)
		return false;
	if (root->val == sum && !root->left && !root->right)
		return true;
	return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
}


void main()
{
	TreeNode *test = NULL;
	hasPathSum(test);
}