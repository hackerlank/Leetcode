//Given a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.
//
//For example :
//Given the following binary tree,
//1 < -- -
/// \
//2     3 < -- -
//\     \
//5     4 < -- -
//You should return[1, 3, 4].
//
//Credits:
//Special thanks to @amrsaqr for adding this problem and creating all test cases.
//
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
	 vector<int> rightSideView(TreeNode* root) {
		 queue<TreeNode*>mQ;
		 vector<int> ret;
		 if (!root)return ret;
		 mQ.push(root);
		 while (!mQ.empty()){
			 ret.push_back(mQ.back()->val);
			 for (int i = mQ.size(); i > 0; i--){
				 TreeNode *tn = mQ.front();
				 mQ.pop();
				 if (tn->left)mQ.push(tn->left);
				 if (tn->right)mQ.push(tn->right);
			 }
		 }
		 return ret;
	 }
 };


void main()
{

}