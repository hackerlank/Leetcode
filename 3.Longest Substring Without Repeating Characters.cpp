//Given a string, find the length of the longest substring without repeating characters.For example, the longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3. For "bbbbb" the longest substring is "b", with the length of 1.


#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s)
{
	if (s.size() == 0)
		return 0;

	unordered_map<char, int> map;
	int count = 0; int maxlen = 0;
	for (int i = 0; i<s.size(); ++i)
	{
		++count;
		if (map.count(s[i]) != 0 && map[s[i]]>i - count)
			count = i - map[s[i]];
		map[s[i]] = i;
		if (count > maxlen)
			maxlen = count;
	}
	return maxlen;
}


void main()
{
	cout << lengthOfLongestSubstring("abcabcdklab");

}

