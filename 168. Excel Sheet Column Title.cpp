//Given a positive integer, return its corresponding column title as appear in an Excel sheet.
//
//For example :
//
//1->A
//2->B
//3->C
//...
//26->Z
//27->AA
//28->AB
//


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

string convertToTitle(int n) {
	string result;
	while (n)
	{
		--n;
		char ch = 'A' + n % 26;
		//result = ch + result;
		result.insert(result.begin(), ch);
		n /= 26;

	}
	return result;

}

void main()
{
	cout << convertToTitle(28);
}