//A peak element is an element that is greater than its neighbors.
//
//Given an input array where num[i] ≠ num[i + 1], find a peak element and return its index.
//
//The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.
//
//You may imagine that num[-1] = num[n] = -∞.
//
//For example, in array[1, 2, 3, 1], 3 is a peak element and your function should return the index number 2.
//
//click to show spoilers.
//
//Note:
//Your solution should be in logarithmic complexity.
//
//Credits :
//		Special thanks to @ts for adding this problem and creating all test cases.
//
//		Subscribe to see which companies asked this question
//
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

int findPeakElement(vector<int>& nums) {
	for (int i = 1; i < nums.size(); i++)
		if (nums[i] < nums[i - 1])
			return i - 1;
	return nums.size() - 1;
}

int findPeakElement2(vector<int>& nums) {
	int low = 0, high = nums.size() - 1;
	while (low < high)
	{
		int mid1 = (low + high) / 2, mid2 = mid1 + 1;
		if (nums[mid1] < nums[mid2])
			low = mid2;
		else
			high = mid1;

	}
	return high;


}

void main()
{

}