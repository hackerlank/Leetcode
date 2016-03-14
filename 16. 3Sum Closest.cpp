//Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target.Return the sum of the three integers.You may assume that each input would have exactly one solution.
//
//For example, given array S = { -1 2 1 - 4 }, and target = 1.
//
//The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
		int res = nums[0] + nums[1] + nums[2];
		for (int i = 0; i < nums.size(); ++i)
		{
			int front = i + 1, end = nums.size() - 1;
			while (front < end)
			{
				int temp = nums[i] + nums[front] + nums[end];
				if (abs(temp - target) < abs(res - target))
				{
					res = temp;
				}
				else if (temp > target)
				{
					--end;
				}
				else
				{
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