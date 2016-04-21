//Given two strings s and t, determine if they are isomorphic.
//
//Two strings are isomorphic if the characters in s can be replaced to get t.
//
//All occurrences of a character must be replaced with another character while preserving the order of characters.No two characters may map to the same character but a character may map to itself.
//
//For example,
//Given "egg", "add", return true.
//
//Given "foo", "bar", return false.
//
//Given "paper", "title", return true.
//
//Note:
//You may assume both s and t have the same length.
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

bool isIsomorphic(string s, string t) {
	char map_s[128] = { 0 };
	char map_t[128] = { 0 };
	int len = s.size();
	for (int i = 0; i < len; ++i)
	{
		if (map_s[s[i]] != map_t[t[i]]) return false;
		map_s[s[i]] = i + 1;
		map_t[t[i]] = i + 1;
	}
	return true;
}

void main()
{

}