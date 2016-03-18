//Given a collection of distinct numbers, return all possible permutations.
//
//For example,
//[1, 2, 3] have the following permutations :
//[1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], and[3, 2, 1].


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


vector<vector<int>> permute(vector<int>& nums) {
	vector<vector<int>> result;
	recursive(nums, 0, result);
	return result;
}

void recursive(vector<int> &nums,int begin,vector<vector<int>> &result)
{
	if (begin>=nums.size()) 
	{
		result.push_back(nums);
		return;
	}
	for (int i = begin; i < nums.size(); ++i)
	{
		swap(nums[begin], nums[i]);
		recursive(nums, begin + 1, result);
		swap(nums[i], nums[begin]);
	}


}


void main()
{
	
}