//Given a string S, find the longest palindromic substring in S. You may assume that the maximum length of S is 1000, and there exists one unique longest palindromic substring.

#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
	string longestPalindrome(string s) {
		int len = s.size(), maxlen = 0, pos = 0;
		if (len <= 1) return s;
		for (int i = 0; i < len; ++i)
		{
			int j = i, k = i;
			while (k < len - 1 && s[k] == s[k + 1]) k++;
			while (j > 0 && k<len - 1 && s[k + 1] == s[j - 1])
			{
				++k;
				--j;
			}
			if ((k - j + 1)>maxlen)
			{
				maxlen = (k - j + 1);
				pos = j;
			}
		}

		return s.substr(pos, maxlen);
	}
};

void main()
{

}

