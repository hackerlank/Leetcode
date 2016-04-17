//Rotate an array of n elements to the right by k steps.
//
//For example, with n = 7 and k = 3, the array[1, 2, 3, 4, 5, 6, 7] is rotated to[5, 6, 7, 1, 2, 3, 4].
//
//Note:
//Try to come up as many solutions as you can, there are at least 3 different ways to solve this problem.
//
//[show hint]
//
//Related problem : Reverse Words in a String II
//
//Credits :
//Special thanks to @Freezen for adding this problem and creating all test cases.
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


void rotate(vector<int>& nums, int k) 
{
	for (int i = 0; i < k; ++i) {
		nums.insert(nums.begin(), nums[nums.size() - 1]);
		nums.pop_back();
	}
}


void main()
{
	vector<int> test{ 1, 2, 3, 4, 5, 6, 7 };
	rotate(test, 3);

}