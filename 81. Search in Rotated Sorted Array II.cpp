//Follow up for "Remove Duplicates":
//What if duplicates are allowed at most twice ?
//
//For example,
//Given sorted array nums = [1, 1, 1, 2, 2, 3],
//
//Your function should return length = 5, with the first five elements of nums being 1, 1, 2, 2 and 3. It doesn't matter what you leave beyond the new length.
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

using namespace std;


class Solution {
public:
	bool search(vector<int>& nums, int target) {
		for (int i : nums)
			if (i == target)
				return true;
		return false;
	}
};


void main()
{
	vector<int> test{ 1, 1, 1, 2, 2, 2, 2 };
	cout << removeDuplicates(test);
}