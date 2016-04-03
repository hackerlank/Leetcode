//Given an input string, reverse the string word by word.
//
//For example,
//Given s = "the sky is blue",
//return "blue is sky the".
//
//Update(2015 - 02 - 12) :
//For C programmers : Try to solve it in - place in O(1) space.
//
//click to show clarification.
//
//Clarification :
//			  What constitutes a word ?
//			  A sequence of non - space characters constitutes a word.
//			  Could the input string contain leading or trailing spaces ?
//			  Yes.However, your reversed string should not contain leading or trailing spaces.
//			  How about multiple spaces between two words ?
//			  Reduce them to a single space in the reversed string.
//			  Subscribe to see which companies asked this question

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


void reverseWords(string &s) {
	reverse(s.begin(), s.end());
	int storeIndex = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ') {
			if (storeIndex != 0) 
				s[storeIndex++] = ' ';
			int j = i;
			while (j < s.size() && s[j] != ' ') 
			{ 
				s[storeIndex++] = s[j++]; 
			}
			reverse(s.begin() + storeIndex - (j - i), s.begin() + storeIndex);
			i = j;
		}
	}
	s.erase(s.begin() + storeIndex, s.end());
}

void main()
{
	string test2 = "   abc   def      ";
	reverseWords(test2);
}