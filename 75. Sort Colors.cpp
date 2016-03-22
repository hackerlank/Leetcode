//Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent, with the colors in the order red, white and blue.
//
//Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.
//
//Note:
//You are not suppose to use the library's sort function for this problem.
//
//click to show follow up.
//
//Follow up :
//A rather straight forward solution is a two - pass algorithm using counting sort.
//First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number of 0's, then 1's and followed by 2's.
//
//Could you come up with an one - pass algorithm using only constant space ?


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
using namespace std;


class Solution {
public:
	void sortColors(vector<int>& nums) {
		int red = -1, white = -1, blue = -1, len = nums.size();
		for (int i = 0; i < len; ++i)
		{
			if (nums[i] == 0)
			{
				nums[++blue] = 2;
				nums[++white] = 1;
				nums[++red] = 0;
			}
			else if (nums[i] == 1)
			{
				nums[++blue] = 2;
				nums[++white] = 1;
			}
			else if (nums[i] == 2)
			{
				nums[++blue] = 2;
			}



		}


	}
};


void main()
{
	vector<int> test;
	test.push_back(1);
	test.push_back(0);
	sortColors(test);
}