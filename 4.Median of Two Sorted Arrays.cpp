//There are two sorted arrays nums1 and nums2 of size m and n respectively. Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int n1 = nums1.size();
		int n2 = nums2.size();
		int sum = n1 + n2;
		if (sum % 2 == 1)//odd number
		{
			return recursion(nums1, nums2, 0, 0, sum / 2 + 1);
		}
		else
		{
			return (recursion(nums1, nums2, 0, 0, sum / 2) + recursion(nums1, nums2, 0, 0, sum / 2 + 1)) / 2.0;
		}
	};
	double recursion(vector<int> &nums1, vector<int> &nums2, int boundry1, int boundry2, int k)
	{
		if (boundry1 >= nums1.size()) return nums2[boundry2 + k - 1];
		if (boundry2 >= nums2.size()) return nums1[boundry1 + k - 1];
		if (k == 1) return min(nums1[boundry1], nums2[boundry2]);
		int x = boundry1 + k / 2 - 1 >= nums1.size() ? INT_MAX : nums1[boundry1 + k / 2 - 1];
		int y = boundry2 + k / 2 - 1 >= nums2.size() ? INT_MAX : nums2[boundry2 + k / 2 - 1];

		if (x < y)
		{
			return recursion(nums1, nums2, boundry1 + k / 2, boundry2, k - k / 2);
		}
		else
		{
			return recursion(nums1, nums2, boundry1, boundry2 + k / 2, k - k / 2);
		}
	}
};

void main()
{

}

