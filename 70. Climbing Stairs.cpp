//Implement int sqrt(int x).
//
//Compute and return the square root of x.


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
	int climbStairs(int n) {
		int one = 1, two = 0, ret = 0;
		for (int i = 0; i < n; ++i)
		{
			ret = one + two;
			two = one;
			one = ret;
		}
		return ret;


	}
};

void main()
{


}