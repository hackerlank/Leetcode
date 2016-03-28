//Given a binary tree, find its minimum depth.
//
//The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.


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

int minDepth(TreeNode* root) {
	if (!root)
		return 0;
	if (!root->left)
		return 1 + minDepth(root->right);
	else if (!root->right)
		return 1 + minDepth(root->left);
	else return 1 + min(minDepth(root->left), minDepth(root->right));
}
void main()
{

}