﻿//Write a function that takes an unsigned integer and returns the number of ’1' bits it has (also known as the Hamming weight).
//
//For example, the 32 - bit integer ’11' has binary representation 00000000000000000000000000001011, so the function should return 3.
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


class Solution {
public:
	int hammingWeight(uint32_t n) {
		int res = 0;
		while (n)
		{
			n &= n - 1;
			++res;
		}
		return res;
	}
};
void main()
{

}