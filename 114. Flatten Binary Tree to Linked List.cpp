//Given a binary tree, flatten it to a linked list in - place.
//
//For example,
//Given
//
//1
/// \
//2   5
/// \   \
//3   4   6
//The flattened tree should look like :
//1
//\
//2
//\
//3
//\
//4
//\
//5
//\
//6
//click to show hints.
//
//Hints:
//If you notice carefully in the flattened tree, each node's right child points to the next node of a pre-order traversal.


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

void flatten(TreeNode* root) {
	TreeNode *cur = root;
	while (cur)
	{
		if (cur->left)
		{

			TreeNode *pre = cur->left;
			while (pre->right)
				pre = pre->right;
			pre->right = cur->right;
			cur->right = cur->left;
			cur->left = nullptr;
		}

		cur = cur->right;

	}

}


void main()
{

}