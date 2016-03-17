//Divide two integers without using multiplication, division and mod operator.
//
//If it is overflow, return MAX_INT.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int divide(int dividend, int divisor) {
	long long m = abs((long long)dividend), n = abs((long long)divisor), result = 0;
	while (m >= n)
	{
		long long temp = n, power = 1;
		while ((temp << 1) <= m)
		{
			temp <<= 1;
			power <<= 1;
		}
		result += power;
		m -= temp;
	}
	if ((dividend > 0) ^ (divisor > 0)) result = -result;
	return result > INT_MAX ? INT_MAX : result;
}

void main()
{
	cout << divide(15, 3);
}