//Given a binary tree
//
//struct TreeLinkNode {
//	TreeLinkNode *left;
//	TreeLinkNode *right;
//	TreeLinkNode *next;
//}
//Populate each next pointer to point to its next right node.If there is no next right node, the next pointer should be set to NULL.
//
//Initially, all next pointers are set to NULL.
//
//Note:
//
//You may only use constant extra space.
//You may assume that it is a perfect binary tree(ie, all leaves are at the same level, and every parent has two children).
//For example,
//Given the following perfect binary tree,
//1
/// \
//2    3
/// \ / \
//4  5  6  7
//After calling your function, the tree should look like :
//1->NULL
/// \
//2 -> 3->NULL
/// \ / \
//4->5->6->7->NULL
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

struct TreeLinkNode {
	TreeLinkNode *left;
	TreeLinkNode *right;
	TreeLinkNode *next;
};

void connect(TreeLinkNode *root) {
	if (!root)
		return;
	while (root->left)
	{
		TreeLinkNode *p = root;
		while (p)
		{
			p->left->next = p->right;
			if (p->next)
				p->right->next = p->next->left;
			p = p->next;
		}
		root = root->left;
	}
}


void main()
{

}