//Given two binary strings, return their sum(also a binary string).
//
//For example,
//a = "11"
//b = "1"
//Return "100".


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
	string addBinary(string a, string b) {
		int i = a.size() - 1, j = b.size() - 1, c = 0;
		string res = "";
		while (i >= 0 || j >= 0 || c == 1)
		{
			c += i >= 0 ? a[i--] - '0' : 0;
			c += j >= 0 ? b[j--] - '0' : 0;
			res.insert(res.begin(), c % 2 + '0');
			c /= 2;
		}
		return res;
	}
};

void main()
{


}