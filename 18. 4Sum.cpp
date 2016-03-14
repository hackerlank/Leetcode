//Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target ? Find all unique quadruplets in the array which gives the sum of target.
//
//Note :
//	 Elements in a quadruplet(a, b, c, d) must be in non - descending order. (ie, a ¡Ü b ¡Ü c ¡Ü d)
//	 The solution set must not contain duplicate quadruplets.
//	 For example, given array S = { 1 0 - 1 0 - 2 2 }, and target = 0.
//
//	 A solution set is :
//(-1, 0, 0, 1)
//(-2, -1, 1, 2)
//(-2, 0, 0, 2)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) 
{
	vector<vector<int>> result;
	if (nums.empty())
		return result;

	if (result.empty() == true)
		return result;
	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size(); ++i)
	{
		int target3 = target - nums[i];
		for (int j = i + 1; j < nums.size(); ++j)
		{
			int target2 = target3 - nums[j], front = j + 1, back = nums.size() - 1;
			while (front<back)
			{
				int twoSum = nums[front] + nums[back];
				if (twoSum<target2)
					++front;
				else if (twoSum>target2)
					--front;
				else
				{
					vector<int> temp;
					temp.push_back(nums[i]);
					temp.push_back(nums[j]);
					temp.push_back(nums[front]);
					temp.push_back(nums[back]);
					result.push_back(temp);
					while (front < back && nums[front] == temp[2])
						++front;
					while (front < back && nums[back] == temp[3])
						--back;
				}

			}
			while (j + 1 < nums.size() && nums[j + 1] == nums[j])
				++j;
		}
		while (i+1 < nums.size() && nums[i + 1] == nums[i])
			++i;
	}
	return result;
}

void main()
{
	vector<int> t;
	t.push_back(0);
	t.push_back(0);
	t.push_back(0);
	t.push_back(0);
	fourSum(t, 0);
}