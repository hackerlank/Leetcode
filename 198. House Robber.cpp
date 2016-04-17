//You are a professional robber planning to rob houses along a street.Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
//
//Given a list of non - negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.
//
//Credits:
//Special thanks to @ifanchu for adding this problem and creating all test cases.Also thanks to @ts for adding additional test cases.
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

class Solution {
public:
	int rob(vector<int>& nums) {
		int a = 0;
		int b = 0;

		for (int i = 0; i < nums.size(); i++)
		{
			if (i % 2 == 0)
			{
				a = max(a + nums[i], b);
			}
			else
			{
				b = max(a, b + nums[i]);
			}
		}

		return max(a, b);
	}
};




void main()
{

}