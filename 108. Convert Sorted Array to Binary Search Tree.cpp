//Given an array where elements are sorted in ascending order, convert it to a height balanced BST.


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

TreeNode* sortedArrayToBST(vector<int>& nums) {
	if (!nums.size())
		return nullptr;
	if (nums.size() == 1)
		return new TreeNode(nums[0]);
	int mid = nums.size() / 2;
	TreeNode *root = new TreeNode(nums[mid]);
	vector<int> l(nums.begin(), nums.begin() + mid);
	vector<int> r(nums.begin() + mid + 1, nums.end());
	root->left = sortedArrayToBST(l);
	root->right = sortedArrayToBST(r);
	return root;



}

void main()
{
	sortedArrayToBST(vector<int> {1, 2});
}