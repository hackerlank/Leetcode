//Related to question Excel Sheet Column Title
//
//Given a column title as appear in an Excel sheet, return its corresponding column number.
//
//For example :
//
//A -> 1
//B -> 2
//C -> 3
//...
//Z -> 26
//AA -> 27
//AB -> 28



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

int titleToNumber(string s) {
	int len = s.size() - 1, result = 0;
	for (int i = len; i >= 0; --i)
	{
		result += (s[i] - 'A' + 1)*pow(26, len - i);
	}
	return result;
}

void main()
{
	titleToNumber("AB");

}