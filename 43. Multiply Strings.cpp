//Given two numbers represented as strings, return multiplication of the numbers as a string.
//
//Note: The numbers can be arbitrarily large and are non - negative.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;



string multiply(string num1, string num2) {
	int m = num1.size(), n = num2.size();
	vector<int> result(m + n, 0);
	string res = "";
	reverse(num1.begin(),num1.end());
	reverse(num2.begin(),num2.end());
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			result[i + j] += (num1[i] - '0') * (num2[j] - '0');
			result[i + j + 1] += result[i + j] / 10;
			result[i + j] %= 10;
		}
	}

	int i = m + n - 1;
	while (i>0 &&result[i] == 0)
		--i;
	for (; i >= 0; --i)
	{
		res += to_string(result[i]);
	}
	return res;

}


void main()
{
	cout << multiply("45","45");
}