//Given a string s consists of upper / lower - case alphabets and empty space characters ' ', return the length of last word in the string.
//
//If the last word does not exist, return 0.
//
//Note: A word is defined as a character sequence consists of non - space characters only.
//
//	  For example,
//	  Given s = "Hello World",
//	  return 5.


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
public:
	int lengthOfLastWord(string s) {
		int n = s.size() - 1, len = 0;
		while (n >= 0 && s[n] == ' ') --n;
		while (n >= 0 && s[n] != ' ')
		{
			++len;
			--n;
		}
		return len;
	}
};

void main()
{
	string test = "abcdefg";
	cout << test.size();
	cout << test.length();


}