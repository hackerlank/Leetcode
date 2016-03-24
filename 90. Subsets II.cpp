//Given a collection of integers that might contain duplicates, nums, return all possible subsets.
//
//Note:
//Elements in a subset must be in non - descending order.
//The solution set must not contain duplicate subsets.
//For example,
//If nums = [1, 2, 2], a solution is :
//
//[
//	[2],
//	[1],
//	[1, 2, 2],
//	[2, 2],
//	[1, 2],
//	[]
//]

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <stack>
#include <map>

using namespace std;

class Solution {
public:
	vector<vector<int>> subsetsWithDup(vector<int>& nums)
	{
		sort(nums.begin(), nums.end());
		vector<vector<int>> result;
		vector<int> temp;
		resursive(nums, result, temp, 0);
		return result;
	}
	void resursive(const vector<int> &nums, vector<vector<int>> &result, vector<int> &temp, int index)
	{
		result.push_back(temp);
		for (int i = index; i < nums.size(); ++i)
		{
			if (i != index && nums[i] == nums[i - 1])
				continue;
			temp.push_back(nums[i]);
			resursive(nums, result, temp, i + 1);
			temp.pop_back();
		}

	}

};

void main()
{
	
}