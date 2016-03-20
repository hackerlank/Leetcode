//A robot is located at the top - left corner of a m x n grid(marked 'Start' in the diagram below).
//
//The robot can only move either down or right at any point in time.The robot is trying to reach the bottom - right corner of the grid(marked 'Finish' in the diagram below).
//
//How many possible unique paths are there ?
//
//Above is a 3 x 7 grid.How many possible unique paths are there ?
//
//Note : m and n will be at most 100.
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
	int m = obstacleGrid.size(), n = obstacleGrid[0].size();
	vector<vector<int> > path(m , vector<int>(n , 0));
	if (!obstacleGrid[0][0])
		path[0][0] = 1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (!obstacleGrid[i][j])
			{
				if (j - 1 >= 0 && i - 1 < 0)
				{
					path[i][j] = path[i][j - 1];
					continue;
				}
				if (j - 1 < 0 && i - 1 >= 0)
				{
					path[i][j] = path[i-1][j];
					continue;
				}
				if (j - 1 >= 0 && i - 1 >= 0)
				{
					path[i][j] = path[i][j - 1] + path[i - 1][j];
					continue;
				}

			}

			else
				path[i][j] = 0;


	return path[m - 1][n - 1];
}


void main()
{
	vector<vector<int>> test;
	vector<int> temp;
	temp.push_back(0);
	temp.push_back(0);
	test.push_back(temp);
	uniquePathsWithObstacles(test);

}