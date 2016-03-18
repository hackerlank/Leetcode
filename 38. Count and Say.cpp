//The count - and - say sequence is the sequence of integers beginning as follows :
//1, 11, 21, 1211, 111221, ...
//
//1 is read off as "one 1" or 11.
//11 is read off as "two 1s" or 21.
//21 is read off as "one 2, then one 1" or 1211.
//Given an integer n, generate the nth sequence.
//
//Note: The sequence of integers will be represented as a string.

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


std::string countAndSay(int n) {

	if (n == 0) return "";
	if (n == 1) return "1";
	string res="1", s;

	for (int i = 0; i < n-1; ++i)
	{
		int len = res.size();
		for (int j = 0; j < len; ++j)
		{
			int count = 1;
			while ((j + 1) < len && res[j + 1] == res[j])
			{
				++count;
				++j;
			}
			s += to_string(count) + res[j];


		}

		res = s;
		s.clear();

	}

	return res;
}


void main()
{
	//cout << countAndSay(1) << endl;
	cout << countAndSay(2) << endl;
	cout << countAndSay(3) << endl;
	cout << countAndSay(4) << endl;
	cout << countAndSay(5) << endl;
	cout << countAndSay(6) << endl;
	cout << countAndSay(7) << endl;
	cout << countAndSay(8) << endl;
}