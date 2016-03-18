//Implement pow(x, n).


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
public:
	double myPow(double x, int n) {
		double result = 1;
		unsigned long p;
		if (n < 0)
		{
			x = 1 / x;
			p = -n;
		}
		else
			p = n;
		while (p)
		{
			if (p & 1)
				result *= x;
			x *= x;
			p >>= 1;
		}
		return result;


	}
};

void main()
{
	cout << pow(0.00001, -3) << endl;
	cout << myPow2(0.00001, -3) << endl;
	cout << myPow(0.00001, -3) << endl;
}