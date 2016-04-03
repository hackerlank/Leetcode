//Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
//
//push(x) --Push element x onto stack.
//pop() --Removes the element on top of the stack.
//top() --Get the top element.
//getMin() --Retrieve the minimum element in the stack.
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

class MinStack {
private:
	stack<int> s1;
	stack<int> s2;
public:
	void push(int x) {
		s1.push(x);
		if (s2.empty() || x <= getMin())  s2.push(x);
	}
	void pop() {
		if (s1.top() == getMin())  s2.pop();
		s1.pop();
	}
	int top() {
		return s1.top();
	}
	int getMin() {
		return s2.top();
	}
};

void main()
{

}