//Given two integers n and k, return all possible combinations of k numbers out of 1 ... n.
//
//For example,
//If n = 4 and k = 2, a solution is :
//
//[
//	[2, 4],
//	[3, 4],
//	[2, 3],
//	[1, 2],
//	[1, 3],
//	[1, 4],
//]


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
using namespace std;

vector<vector<int>> combine(int n, int k) {
	vector<vector<int>> result;
	vector<int> temp;
	if (n <= 0 || k <= 0 || k > n)
		return result;
	recursive(n, k, 0, temp, result);
	return result;
}

void recursive(int n, int k, int i, vector<int> &temp, vector<vector<int>> &result)
{
	if (temp.size() == k)
	{
		result.push_back(temp);
		return;
	}
	while (i < n)
	{
		temp.push_back(i + 1);
		recursive(n, k, i + 1, temp, result);
		temp.push_back();
		++i;
	}
}

void main()
{
	combine(4, 3);
}