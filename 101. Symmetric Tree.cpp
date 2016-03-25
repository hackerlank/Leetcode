//Given a binary tree, check whether it is a mirror of itself(ie, symmetric around its center).
//
//For example, this binary tree is symmetric :
//
//1
/// \
//2   2
/// \ / \
//3  4 4  3
//But the following is not :
//1
/// \
//2   2
//\   \
//3    3
//Note:
//Bonus points if you could solve it both recursively and iteratively.
//
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

bool check(TreeNode *a, TreeNode *b)
{
	if (!a && !b)
		return true;
	if ((!a && b) || (a && !b))
		return false;
	if (a->val != b->val)
		return false;
	else 
		return check(a->left, b->right) && check(a->right, b->left);


}

bool isSymmetric(TreeNode* root) {
	if (!root)
		return true;
	return check(root->left, root->right);
}

bool isSymmetric2(TreeNode* root) {
	if (!root)
		return true;
	queue<TreeNode*> p, q;
	p.push(root);
	q.push(root);
	while (!p.empty() && !q.empty())
	{
		TreeNode *left = p.front();
		p.pop();
		TreeNode *right = q.front();
		q.pop();
		if (!left && !right)
			continue;
		if ((!left && right) || (left && !right))
			return false;
		if (left->val != right->val)
			return false;
		p.push(left->left);
		p.push(left->right);
		q.push(right->right);
		q.push(right->left);


	}
	return true;


}



void main()
{
	TreeNode *a = new TreeNode(1);
	a->left = new TreeNode(2);
	a->right = new TreeNode(2);
	cout << isSymmetric(a);
}