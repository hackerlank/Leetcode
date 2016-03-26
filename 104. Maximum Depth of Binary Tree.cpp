//Given a binary tree, find its maximum depth.
//
//The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

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
	int maxDepth(TreeNode* root) {
		int result = 0;
		travel(root, 0, result);
		return result;
	}
	void travel(TreeNode *root, int curdep, int &maxdep)
	{
		if (!root)
		{
			maxdep = max(maxdep, curdep);
			return;
		}
		travel(root->left, curdep + 1, maxdep);
		travel(root->right, curdep + 1, maxdep);
		return;
	}

	int maxDepth2(TreeNode* root) {
		return root ? 1 + max(maxDepth(root->left), maxDepth(root->right)) : 0;
	}

};


void main()
{

}