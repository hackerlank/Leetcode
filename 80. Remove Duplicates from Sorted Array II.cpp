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


int removeDuplicates2(vector<int>& nums) {
	int count = 0;
	for (int i = 2; i < nums.size(); ++i)
	{
		if (nums[i] == nums[i - 2 - count])
			++count;
		else
			nums[i - count] = nums[i];


	}
	return nums.size() - count;


}


int removeDuplicates(vector<int>& nums) {
	multimap<int, int> m;
	int len = nums.size();
	for (int i = 0; i < len; ++i)
	{
		cout << m.count(nums[i]) << endl;
		if (m.count(nums[i]) < 2)
		{
			m.insert(make_pair(nums[i], nums[i]));
		}
		else
		{
			nums.erase(nums.begin() + i);
			len = nums.size();
			--i;
		}
	}
	return m.size();

}




void main()
{
	vector<int> test{ 1, 1, 1, 2, 2, 2, 2 };
	cout << removeDuplicates(test);
}