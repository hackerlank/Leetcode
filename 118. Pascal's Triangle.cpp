//Given numRows, generate the first numRows of Pascal's triangle.
//
//For example, given numRows = 5,
//Return
//
//[
//	[1],
//	[1, 1],
//	[1, 2, 1],
//	[1, 3, 3, 1],
//	[1, 4, 6, 4, 1]
//]


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

vector<vector<int>> generate(int numRows) {
	vector<vector<int>> result(numRows, vector<int>());
	if (numRows == 0)
		return result;
	if (numRows == 1)
	{
		result[0].push_back(1);
		return result;
	}
	if (numRows == 2)
	{
		result[0].push_back(1);
		result[1] = { 1, 1 };
		return result;
	}
	result[0].push_back(1);
	result[1] = { 1, 1 };
	for (int i = 3; i <= numRows; ++i)
	{
		result[i - 1].push_back(1);
		for (int j = 1; j <= i - 2; ++j)
		{
			result[i - 1].push_back(result[i - 2][j - 1] + result[i - 2][j]);
		}
		result[i - 1].push_back(1);
	}
	return result;
}
void main()
{
	generate(4);
}