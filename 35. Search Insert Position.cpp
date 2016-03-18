//Given a sorted array and a target value, return the index if the target is found.If not, return the index where it would be if it were inserted in order.
//
//You may assume no duplicates in the array.
//
//Here are few examples.
//[1, 3, 5, 6], 5 ¡ú 2
//[1, 3, 5, 6], 2 ¡ú 1
//[1, 3, 5, 6], 7 ¡ú 4
//[1, 3, 5, 6], 0 ¡ú 0

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int start = 0, end = nums.size(), mid = -1;
		while (start < end)
		{
			mid = (start + end) / 2;
			if (nums[mid] < target)
			{
				start = mid + 1;
			}
			else
			{
				end = mid;
			}


		}
		return start;




	}
};

void main()
{

}