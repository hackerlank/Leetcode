//Given a collection of numbers that might contain duplicates, return all possible unique permutations.
//
//For example,
//[1, 1, 2] have the following unique permutations :
//[1, 1, 2], [1, 2, 1], and[2, 1, 1].


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
using namespace std;

void recursive(vector<int> &nums, int begin, vector<vector<int>> &result)
{
	if (begin >= nums.size())
	{
		result.push_back(nums);
		return;
	}
	unordered_set<int> set;
	for (int i = begin; i < nums.size(); ++i)
	{
		if (set.count(nums[i]) != 0)
			continue;
		set.insert(nums[i]);
		swap(nums[begin], nums[i]);
		recursive(nums, begin + 1, result);
		swap(nums[i], nums[begin]);
	}


}

vector<vector<int>> permuteUnique(vector<int>& nums) {
	vector<vector<int>> result;
	recursive(nums, 0, result);
	return result;
}




void main()
{
	
}