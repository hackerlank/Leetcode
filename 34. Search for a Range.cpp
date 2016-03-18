//Given a sorted array of integers, find the starting and ending position of a given target value.
//
//Your algorithm's runtime complexity must be in the order of O(log n).
//
//If the target is not found in the array, return[-1, -1].
//
//For example,
//Given[5, 7, 7, 8, 8, 10] and target value 8,
//return[3, 4].

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		int start = 0, end = nums.size(), mid = -1, left = -1, right = -1;
		while (start < end)
		{
			mid = (start + end) / 2;
			if (nums[mid] >= target)
			{
				end = mid;
			}
			else
			{
				start = mid + 1;
			}

		}
		left = start;

		start = 0; end = nums.size();
		while (start<end)
		{
			mid = (start + end) / 2;
			if (nums[mid]>target)
			{
				end = mid;
			}
			else
			{
				start = mid + 1;
			}

		}
		right = start;

		return (left == right) ? vector<int>{-1, -1} : vector<int>{ left, right - 1 };

	}
};

void main()
{
	vector<int> test;
	test.push_back(1);
	test.push_back(5);
	test.push_back(1);
	nextPermutation(test);
}