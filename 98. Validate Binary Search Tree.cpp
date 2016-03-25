//Given a binary tree, determine if it is a valid binary search tree(BST).
//
//Assume a BST is defined as follows :
//
//The left subtree of a node contains only nodes with keys less than the node's key.
//The right subtree of a node contains only nodes with keys greater than the node's key.
//Both the left and right subtrees must also be binary search trees.
//confused what "{1,#,2,3}" means ? > read more on how binary tree is serialized on OJ.
//
//
//OJ's Binary Tree Serialization:
//The serialization of a binary tree follows a level order traversal, where '#' signifies a path terminator where no node exists below.
//
//Here's an example:
//1
/// \
//2   3
///
//4
//\
//5
//The above binary tree is serialized as "{1,2,3,#,#,4,#,#,5}".

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
	bool isValidBST(TreeNode* root) {
		return recursive(root, nullptr, nullptr);
	}

	bool recursive(TreeNode *root, TreeNode *min, TreeNode *max)
	{
		if (!root)
			return true;
		if ((min && root->val <= min->val) || (max && root->val >= max->val))
			return false;
		return recursive(root->left, min, root) && recursive(root->right, root, max);
	}
};


void main()
{
	
}