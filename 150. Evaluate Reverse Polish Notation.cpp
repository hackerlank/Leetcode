//Evaluate the value of an arithmetic expression in Reverse Polish Notation.
//
//Valid operators are + , -, *, / .Each operand may be an integer or another expression.
//
//Some examples :
//["2", "1", "+", "3", "*"] -> ((2 + 1) * 3) -> 9
//["4", "13", "5", "/", "+"] -> (4 + (13 / 5)) -> 6
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

class Solution {
public:
	int evalRPN(vector<string>& tokens) {
		stack<int> stack;
		for (auto s : tokens)
		{
			if (s.size() > 1 || isdigit(s[0]))
				stack.push(stoi(s));
			else
			{
				auto op1 = stack.top(); stack.pop();
				auto op2 = stack.top(); stack.pop();
				switch (s[0])
				{
				case '+': stack.push(op2 + op1); break;
				case '-': stack.push(op2 - op1); break;
				case '*': stack.push(op2*op1); break;
				case '/': stack.push(op2 / op1); break;
				}

			}

		}
		return stack.top();


	}
};



void main()
{

}