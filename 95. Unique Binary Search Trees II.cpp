//Given n, how many structurally unique BST's (binary search trees) that store values 1...n?
//
//For example,
//Given n = 3, there are a total of 5 unique BST's.
//
//1         3     3      2      1
//\ / / / \      \
//3     2     1      1   3      2
/// / \                 \
//2     1         2                 3
//Subscribe to see which companies asked this question

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
	vector<TreeNode *> generateSubtrees(int s, int e) {
		vector<TreeNode *> res;
		if (s > e)
		{
			res.push_back(NULL);
			return res;// empty tree
		}



		for (int i = s; i <= e; ++i) {
			vector<TreeNode *> leftSubtrees = generateSubtrees(s, i - 1);
			vector<TreeNode *> rightSubtrees = generateSubtrees(i + 1, e);

			for (TreeNode *left : leftSubtrees) {
				for (TreeNode *right : rightSubtrees) {
					TreeNode *root = new TreeNode(i);
					root->left = left;
					root->right = right;
					res.push_back(root);
				}
			}
		}
		return res;
	}

	vector<TreeNode*> generateTrees(int n) {
		if (n == 0)
			return vector<TreeNode*>();
		return generateSubtrees(1, n);
	}
};

void main()
{
	vector<TreeNode *> test = generateTrees(2);
}