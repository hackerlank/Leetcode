//Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0 ? Find all unique triplets in the array which gives the sum of zero.
//
//Note :
//	 Elements in a triplet(a, b, c) must be in non - descending order. (ie, a ¡Ü b ¡Ü c)
//	 The solution set must not contain duplicate triplets.
//	 For example, given array S = { -1 0 1 2 - 1 - 4 },
//
//	 A solution set is :
//(-1, 0, 1)
//(-1, -1, 2)

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> res;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); ++i)
		{
			if (i > 0 && nums[i] == nums[i - 1])
				continue;
			int target = -nums[i];
			int front = i + 1;
			int end = nums.size() - 1;
			while (front < end)
			{
				if (front > i + 1 && nums[front] == nums[front - 1])
				{
					++front;
					continue;
				}
				if ((nums[front] + nums[end]) < target)
					++front;
				else if ((nums[front] + nums[end]) > target)
					--end;
				else
				{
					vector<int> temp;
					temp.push_back(nums[i]);
					temp.push_back(nums[front]);
					temp.push_back(nums[end]);
					res.push_back(temp);
					++front;
				}
			}

		}
		return res;
	}
};
void main()
{

}