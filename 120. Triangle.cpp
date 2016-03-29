//Given a triangle, find the minimum path sum from top to bottom.Each step you may move to adjacent numbers on the row below.
//
//For example, given the following triangle
//[
//	[2],
//	[3, 4],
//	[6, 5, 7],
//	[4, 1, 8, 3]
//]
//The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).
//
//Note:
//Bonus point if you are able to do this using only O(n) extra space, where n is the total number of rows in the triangle.


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

int minimumTotal(vector<vector<int>>& triangle) {
	vector<vector<int>> r(triangle);
	int len = triangle.size();

	for (int i = 1; i < len; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			if (j - 1 >= 0 && j < r[i - 1].size())
			{
				r[i][j] = min(r[i - 1][j], r[i - 1][j - 1]) + r[i][j];
				continue;
			}
			if (j - 1 < 0 && j < r[i - 1].size())
			{
				r[i][j] = r[i - 1][j] + r[i][j];
				continue;
			}
			if (j - 1 >= 0 && j >= r[i - 1].size())
			{
				r[i][j] = r[i - 1][j - 1] + r[i][j];
				continue;
			}


		}
	}
	int result = INT_MAX;
	for (int i = 0; i < len; ++i)
	{
		result = min(r[len - 1][i], result);
	}
	return result;
}
void main()
{
	vector<vector<int>> test;
	vector<int> temp;
	temp.push_back(2);
	test.push_back(temp);
	temp.clear();
	temp.push_back(3);
	temp.push_back(4);
	test.push_back(temp);
	temp.clear();
	temp.push_back(6);
	temp.push_back(5);
	temp.push_back(7);
	test.push_back(temp);
	temp.clear();
	temp.push_back(4);
	temp.push_back(1);
	temp.push_back(3);
	temp.push_back(8);
	test.push_back(temp);
	minimumTotal(test);
}