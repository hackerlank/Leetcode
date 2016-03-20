//Given a m x n grid filled with non - negative numbers, find a path from top left to bottom right which minimizes the sum of all numbers along its path.
//
//Note: You can only move either down or right at any point in time.


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
using namespace std;

int minPathSum(vector<vector<int>>& grid) {
	int m = grid.size(), n = grid[0].size();
	vector<vector<int> > path(m, vector<int>(n, 0));
	if (grid[0][0])
		path[0][0] = grid[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			{
				if (j - 1 >= 0 && i - 1 < 0)
				{
					path[i][j] = path[i][j - 1]+grid[i][j];
					continue;
				}
				if (j - 1 < 0 && i - 1 >= 0)
				{
					path[i][j] = path[i - 1][j]+grid[i][j];
					continue;
				}
				if (j - 1 >= 0 && i - 1 >= 0)
				{
					path[i][j] = min(path[i][j - 1], path[i - 1][j])+grid[i][j];
					continue;
				}

			}

	return path[m - 1][n - 1];
}



void main()
{
	vector<vector<int>> test;
	vector<int> temp;
	temp.push_back(1);
	temp.push_back(2);
	test.push_back(temp);
	cout << minPathSum(test) << endl;

}