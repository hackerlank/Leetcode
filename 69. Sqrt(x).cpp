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
	int mySqrt(int x) {
		if (x<0)
			return INT_MIN;
		if (x == 0)
			return 0;
		double pre = 0.0, cur = 1.0;
		do
		{
			pre = cur;
			cur = (pre + (x / pre)) / 2;
		} while (abs(pre - cur)>0.00001);
		return (int)cur;

	}
};

void main()
{


}