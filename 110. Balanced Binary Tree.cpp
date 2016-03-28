//Given a binary tree, determine if it is height-balanced.
//
//For this problem, a height - balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.


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

int recursive(TreeNode *root)
{
	if (!root)
		return 0;
	return max(recursive(root->left), recursive(root->right)) + 1;
}

bool isBalanced(TreeNode* root) {
	if (!root)
		return true;
	return isBalanced(root->left) && isBalanced(root->right) && abs(recursive(root->left) - recursive(root->right)) <= 1;
}

void main()
{
	//1,2,2,3,3,3,3,4,4,4,4,4,4,null,null,5,5
	TreeNode *test = new TreeNode(1);
	test->left = new TreeNode(2);
	test->right = new TreeNode(2);
	test->left->left = new TreeNode(3);
	test->left->right = new TreeNode(3);
	test->right->left = new TreeNode(3);
	test->right->right= new TreeNode(3);

	test->left->left->left = new TreeNode(4);
	test->left->left->right = new TreeNode(4);
	test->left->right->left = new TreeNode(4);
	test->left->right->right = new TreeNode(4);
	test->right->left->left = new TreeNode(4);
	test->right->left->right = new TreeNode(4);

	test->right->right->left = NULL;
	test->right->right->right = NULL;

	test->left->left->left->left = new TreeNode(5);
	test->left->left->left->right = new TreeNode(5);

	cout<<isBalanced(test);
}