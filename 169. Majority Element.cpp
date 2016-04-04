//Given an array of size n, find the majority element.The majority element is the element that appears more than ⌊ n / 2 ⌋ times.
//
//You may assume that the array is non - empty and the majority element always exist in the array.
//
//Credits:
//Special thanks to @ts for adding this problem and creating all test cases.
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

int majorityElement(vector<int>& nums) {
	int major, counts = 0, n = nums.size();
	for (int i = 0; i < n; i++) {
		if (!counts) {
			major = nums[i];
			counts = 1;
		}
		else counts += (nums[i] == major) ? 1 : -1;
	}
	return major;
}

int majorityElement2(vector<int>& nums) {
	unordered_map<int, int> counts;
	int n = nums.size();
	for (int i = 0; i < n; i++)
		if (++counts[nums[i]] > n / 2)
			return nums[i];
}

void main()
{
	vector<int> test{ 1, 2, 3, 2, 2, 4, 2 };
	majorityElement(test);

}