//Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
//
//The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
//
//Subscribe to see which companies asked this question

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;


bool isValid(string s) {
	stack<char> paren;
	for (int i = 0; i < s.size(); ++i) 
	{
		switch (s[i]) {
		case '(':
		case '{':
		case '[': paren.push(s[i]); break;
		case ')': if (paren.empty() || paren.top() != '(') return false; else paren.pop(); break;
		case '}': if (paren.empty() || paren.top() != '{') return false; else paren.pop(); break;
		case ']': if (paren.empty() || paren.top() != '[') return false; else paren.pop(); break;
		default:; // pass
		}
	}
	return paren.empty();
}

void main()
{

}