//Given a list of non negative integers, arrange them such that they form the largest number.
//
//For example, given[3, 30, 34, 5, 9], the largest formed number is 9534330.
//
//Note: The result may be very large, so you need to return a string instead of an integer.
//
//  Credits :
//		  Special thanks to @ts for adding this problem and creating all test cases.
//
//		  Subscribe to see which companies asked this question

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



class Solution {
public:
	string largestNumber(vector<int>& nums) {
		vector<string> a;
		string result;
		for (auto i : nums)
			a.push_back(to_string(i));
		sort(a.begin(), a.end(), [](string &a1, string &a2){return a1 + a2 > a2 + a1; });
		for (auto i : a)
			result += i;
		while (result[0] == '0' && result.size() > 1)
			result.erase(0, 1);
		return result;


	}
};


void main()
{

}