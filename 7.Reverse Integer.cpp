//Reverse digits of an integer.
//
//Example1: x = 123, return 321
//Example2 : x = -123, return -321

#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
	int reverse(int x) {
		long long y = 0;
		while (x)
		{
			y = y * 10 + x % 10;
			x /= 10;
		}
		return ((y > INT_MAX) || (y < INT_MIN)) ? 0 : y;
	}
};

void main()
{
	
}

