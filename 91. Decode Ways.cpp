//A message containing letters from A - Z is being encoded to numbers using the following mapping :
//
//'A' -> 1
//'B' -> 2
//...
//'Z' -> 26
//Given an encoded message containing digits, determine the total number of ways to decode it.
//
//For example,
//Given encoded message "12", it could be decoded as "AB" (1 2) or "L" (12).
//
//The number of ways decoding "12" is 2.


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <stack>
#include <map>

using namespace std;


int numDecodings(string s) {
	int len = s.size(), f1 = 1, f2 = 1;
	if (len == 0 || s[0] == '0')
		return 0;
	if (len == 1)
		return 1;
	for (int i = 1; i < len; ++i)
	{
		if (s[i] != '0' && (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6')))
		{
			f1 = f1 + f2;
			f2 = f1 - f2;
		}
		if (s[i] == '0' && (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6')))
		{
			f1 = f2;
		}
		if (s[i] != '0' && !(s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6')))
		{
			f2 = f1;
		}
		if (s[i] == '0' && !(s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6')))
		{
			return 0;
		}


	}
	return f1;

}


void main()
{
	numDecodings("10");
}