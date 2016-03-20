//Given an array of non - negative integers, you are initially positioned at the first index of the array.
//
//Each element in the array represents your maximum jump length at that position.
//
//Determine if you are able to reach the last index.
//
//For example :
//A = [2, 3, 1, 1, 4], return true.
//
//A = [3, 2, 1, 0, 4], return false.


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool canJump(vector<int>& nums) {
	int reach = 0, n = nums.size(), i = 0;
	for (; i < n && i <= reach; ++i)
	{
		reach = max(nums[i] + i, reach);
	}
	return i == n;

}

void main()
{
	vector<int> test{ 0 };
	canJump(test);


}