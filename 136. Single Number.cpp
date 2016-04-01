//Given an array of integers, every element appears twice except for one.Find that single one.
//
//Note:
//Your algorithm should have a linear runtime complexity.Could you implement it without using extra memory ?
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
	int singleNumber(vector<int>& nums) {
		int result = nums[0];
		for (int i = 1; i < nums.size(); ++i)
		{
			result = result^nums[i];
		}
		return result;
	}
};

void main()
{

}