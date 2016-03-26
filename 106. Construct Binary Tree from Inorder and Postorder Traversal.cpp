//Given preorder and inorder traversal of a tree, construct the binary tree.
//
//Note:
//You may assume that duplicates do not exist in the tree.

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

class Solution {
public:
	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
		return recursive(inorder, 0, inorder.size(), postorder, 0, postorder.size());
	}

	TreeNode * recursive(const vector<int> &inorder, int i, int j, const vector<int> &postorder, int ii, int jj)
	{
		if (i >= j || ii >= jj)
			return nullptr;
		int mid = postorder[jj - 1];
		auto f = find(inorder.begin() + i, inorder.begin() + j, mid);
		int d = f - inorder.begin() - i;
		TreeNode *root = new TreeNode(mid);
		root->left = recursive(inorder, i, i + d, postorder, ii, ii + d);
		root->right = recursive(inorder, i + d + 1, j, postorder, ii + d, jj - 1);
		return root;

	}


};

void main()
{

}