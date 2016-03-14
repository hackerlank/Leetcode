//Given n pairs of parentheses, write a function to generate all combinations of well - formed parentheses.
//
//For example, given n = 3, a solution set is :
//
//"((()))", "(()())", "(())()", "()(())", "()()()"


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

class Solution {
public:
	vector<string> result;
	vector<string> generateParenthesis(int n) {
		recursive("", n, n);
		return result;
	}

	void recursive(string data, int left, int right)
	{
		if (!left&&!right) result.push_back(data);
		if (left) recursive(data + '(', left - 1, right);
		if (right > left) recursive(data + ')', left, right - 1);
	}
};

void main()
{

}