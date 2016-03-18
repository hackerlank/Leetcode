//Given an array of strings, group anagrams together.
//
//For example, given: ["eat", "tea", "tan", "ate", "nat", "bat"],
//Return :
//
//	   [
//		   ["ate", "eat", "tea"],
//		   ["nat", "tan"],
//		   ["bat"]
//	   ]
//Note:
//For the return value, each inner list's elements must follow the lexicographic order.
//All inputs will be in lower - case.


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		unordered_map<string, vector<string>> m;
		int i = 0;
		for (auto s : strs)
		{
			sort(s.begin(), s.end());
			m[s].push_back(strs[i++]);
		}
		vector<vector<string>> result;
		for (auto n : m)
		{
			sort(n.second.begin(), n.second.end());
			result.push_back(n.second);
		}
		return result;

	}
};
void main()
{

}