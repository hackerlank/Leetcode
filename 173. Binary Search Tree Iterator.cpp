//Implement an iterator over a binary search tree(BST).Your iterator will be initialized with the root node of a BST.
//
//Calling next() will return the next smallest number in the BST.
//
//Note: next() and hasNext() should run in average O(1) time and uses O(h) memory, where h is the height of the tree.
//
//  Credits :
//		  Special thanks to @ts for adding this problem and creating all test cases.
//
//		  Subscribe to see which companies asked this question

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

class BSTIterator {
public:
	stack<TreeNode *> s;
	BSTIterator(TreeNode *root) {
		pushall(root);
	}

	/** @return whether we have a next smallest number */
	bool hasNext() {
		return !s.empty();
	}

	/** @return the next smallest number */
	int next() {
		TreeNode *temp = s.top();
		s.pop();
		pushall(temp->right);
		return temp->val;
	}
	void pushall(TreeNode *root)
	{
		while (root)
		{
			s.push(root);
			root = root->left;
		}


	}

};

/**
* Your BSTIterator will be called like this:
* BSTIterator i = BSTIterator(root);
* while (i.hasNext()) cout << i.next();
*/
void main()
{

}