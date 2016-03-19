//Find the contiguous subarray within an array(containing at least one number) which has the largest sum.
//
//For example, given the array[−2, 1, −3, 4, −1, 2, 1, −5, 4],
//the contiguous subarray[4, −1, 2, 1] has the largest sum = 6.
//
//click to show more practice.
//
//More practice :
//If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int maxSubArray(vector<int>& nums) {
	int len = nums.size(), temp = nums[0], m = nums[0];
	for (int i = 1; i < len; ++i)
	{
		temp = max(nums[i], temp + nums[i]);
		m = max(temp, m);
	}
	return m;
}
void main()
{
	maxSubArray(vector<int>{-2,1});
}