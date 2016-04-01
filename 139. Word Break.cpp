//Given an array of integers, every element appears three times except for one.Find that single one.
//
//Note:
//Your algorithm should have a linear runtime complexity.Could you implement it without using extra memory ?

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

bool wordBreak(string s, unordered_set<string>& wordDict) {
	if (!wordDict.size())
		return false;
	vector<bool> f(s.size() + 1, false);
	f[0] = true;
	for (int i = 1; i <= s.size(); ++i)
	{
		for (int j = i - 1; j >= 0; --j)
		{
			if (f[j] && wordDict.count(s.substr(j, i - j)))
			{
				f[i] = true;
				break;
			}

		}


	}
	return f[s.size()];

}

void main()
{
	string str= "a";
	unordered_set<string> s;
	s.insert("a");
	wordBreak(str, s);
}