//Suppose a sorted array is rotated at some pivot unknown to you beforehand.
//
//(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
//
//Find the minimum element.
//
//You may assume no duplicate exists in the array.
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
	int findMin(vector<int>& nums) {
		int start = 0, end = nums.size() - 1;

		while (start < end) {
			if (nums[start] < nums[end])
				return nums[start];

			int mid = (start + end) / 2;

			if (nums[mid] >= nums[start]) {
				start = mid + 1;
			}
			else {
				end = mid;
			}
		}

		return nums[start];
	}
};

void main()
{

}