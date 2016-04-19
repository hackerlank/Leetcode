//Given a 2d grid map of '1's(land) and '0's(water), count the number of islands.An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically.You may assume all four edges of the grid are all surrounded by water.
//
//Example 1:
//
//11110
//11010
//11000
//00000
//Answer : 1
//
//		 Example 2 :
//
//		 11000
//		 11000
//		 00100
//		 00011
//	 Answer : 3
//
//		  Credits :
//				  Special thanks to @mithmatt for adding this problem and creating all test cases.
//
//				  Subscribe to see which companies asked this question


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



class Solution {
private:
	void dfs(vector<vector<char>>& grid, int i, int j, int m, int n){
		if (i >= 0 && i < m && j >= 0 && j < n && grid[i][j] == '1') {
			grid[i][j] = '2';
			dfs(grid, i + 1, j, m, n);
			dfs(grid, i - 1, j, m, n);
			dfs(grid, i, j + 1, m, n);
			dfs(grid, i, j - 1, m, n);
		}
	}
public:
	int numIslands(vector<vector<char>>& grid) {
		int m = (int)grid.size();
		if (m == 0) return 0;
		int n = (int)grid[0].size();
		if (n == 0) return 0;
		int res = 0;
		for (int i = 0; i < m; ++i){
			for (int j = 0; j < n; ++j){
				if (grid[i][j] == '1'){
					++res;
					dfs(grid, i, j, m, n);
				}
			}
		}
		return res;
	}
};

void main()
{

}