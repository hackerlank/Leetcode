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
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
	{
		return recursive(preorder, 0, preorder.size(), inorder, 0, inorder.size());
	}


	TreeNode * recursive(const vector<int> &preorder, int i, int j, const vector<int> &inorder, int ii, int jj)
	{
		if (i >= j || ii >= jj)
			return nullptr;
		int mid = preorder[i];
		auto f = find(inorder.begin() + ii, inorder.begin() + jj, mid);
		int d = f - inorder.begin() - ii;
		TreeNode *root = new TreeNode(mid);
		root->left = recursive(preorder, i + 1, i + 1 + d, inorder, ii, ii + d);
		root->right = recursive(preorder, i + 1 + d, j, inorder, ii + d + 1, jj);
		return root;

	}

};


void main()
{

}