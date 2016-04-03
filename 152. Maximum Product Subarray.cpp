//Find the contiguous subarray within an array(containing at least one number) which has the largest product.
//
//For example, given the array[2, 3, -2, 4],
//the contiguous subarray[2, 3] has the largest product = 6.
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

int maxProduct(vector<int>& nums) {
	if (!nums.size())
		return 0;
	if (nums.size() == 1)
		return nums[0];
	int posmax = 0, negmax = 0, totalmax=0;
	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] < 0)
			swap(posmax, negmax);
		posmax = max(posmax*nums[i], nums[i]);
		negmax = min(negmax*nums[i], nums[i]);
		totalmax = max(totalmax, posmax);

	}
	return totalmax;

}

void main()
{
	vector<int> test{ -4, -3 };
	maxProduct(test);
}