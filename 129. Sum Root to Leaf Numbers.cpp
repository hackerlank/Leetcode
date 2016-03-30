//Given two words(beginWord and endWord), and a dictionary's word list, find the length of shortest transformation sequence from beginWord to endWord, such that:
//
//Only one letter can be changed at a time
//Each intermediate word must exist in the word list
//For example,
//
//Given:
//beginWord = "hit"
//endWord = "cog"
//wordList = ["hot", "dot", "dog", "lot", "log"]
//As one shortest transformation is "hit" -> "hot" -> "dot" -> "dog" -> "cog",
//return its length 5.
//
//Note :
//	 Return 0 if there is no such transformation sequence.
//	 All words have the same length.
//	 All words contain only lowercase alphabetic characters.
//

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


int recursive(TreeNode *root, int sum)
{
	if (!root)
		return 0;
	if (!root->left && !root->right)
		return sum + root->val;
	return recursive(root->left, (sum + root->val) * 10) + recursive(root->right, (sum + root->val) * 10);
}
int sumNumbers(TreeNode* root) {
	return recursive(root, 0);
}
void main()
{

}