//Given a set of distinct integers, nums, return all possible subsets.
//
//Note:
//Elements in a subset must be in non - descending order.
//The solution set must not contain duplicate subsets.
//For example,
//If nums = [1, 2, 3], a solution is :
//
//[
//	[3],
//	[1],
//	[2],
//	[1, 2, 3],
//	[1, 3],
//	[2, 3],
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
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
	int len = nums.size();
	int index = 0;
	sort(nums.begin(), nums.end());
	vector<vector<int>> result;
	for (int i = 0; i < len; ++i)
	{
		vector<int> temp;
		temp.push_back(nums[i]);
		result.push_back(temp);
	}
	while (index < len)
	{
		int resultlen = result.size();
		for (int i = 0; i < resultlen; ++i)
		{
			int t = result[i].size() - 1;
			if (result[i][t]<nums[index])
			{
				vector<int> temp = result[i];
				temp.push_back(nums[index]);
				result.push_back(temp);
			}


		}

		++index;
	}
	result.push_back(vector<int>());
	return result;
}

void main()
{
	vector<int> test;
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	subsets(test);
}