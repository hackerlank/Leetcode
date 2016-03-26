//Given a binary tree, return the zigzag level order traversal of its nodes' values. (ie, from left to right, then right to left for the next level and alternate between).
//
//For example :
//Given binary tree{ 3, 9, 20, #, #, 15, 7 },
//3
/// \
//9  20
/// \
//15   7
//return its zigzag level order traversal as :
//[
//	[3],
//	[20, 9],
//	[15, 7]
//]
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
	vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
		vector<vector<int>> result;
		if (!root)
			return result;
		travel(root, 0, result);
		if (result.size() >= 2)
			for (int i = 1; i < result.size(); ++++i)
				reverse(result[i].begin(), result[i].end());
		return result;
	}
	void travel(TreeNode *root, int index, vector<vector<int>> &result)
	{
		if (!root)
			return;
		if (result.size() < index + 1)
			result.push_back(vector<int>());
		result[index].push_back(root->val);
		travel(root->left, index + 1, result);
		travel(root->right, index + 1, result);
		return;
	}
};


void main()
{

}