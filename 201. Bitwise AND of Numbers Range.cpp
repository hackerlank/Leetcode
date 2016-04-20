//Given a range[m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.
//
//For example, given the range[5, 7], you should return 4.
//
//Credits:
//Special thanks to @amrsaqr for adding this problem and creating all test cases.
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
	int rangeBitwiseAnd(int m, int n) {
		while (m < n) n = n & (n - 1);
		return n;
	}
};
void main()
{

}