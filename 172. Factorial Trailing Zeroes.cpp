//Given an integer n, return the number of trailing zeroes in n!.
//
//Note: Your solution should be in logarithmic time complexity.
//
//  Credits :
//		  Special thanks to @ts for adding this problem and creating all test cases.
//
//		  Subscribe to see which companies asked this question
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

int trailingZeroes(int n) {
	int result = 0;
	for (long long i = 5; n / i > 0; i *= 5)
		result += (n / i);
	return result;

}

void main()
{
	trailingZeroes(10);
}