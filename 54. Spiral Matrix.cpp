//Given a matrix of m x n elements(m rows, n columns), return all elements of the matrix in spiral order.
//
//For example,
//Given the following matrix :
//
//[
//	[1, 2, 3],
//	[4, 5, 6],
//	[7, 8, 9]
//]
//You should return[1, 2, 3, 6, 9, 8, 7, 4, 5].


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
	if (matrix.empty()) return{};
	int m = matrix.size(), n = matrix[0].size();
	vector<int> spiral(m * n);
	int up = 0, down = m - 1, left = 0, right = n - 1, k = 0;
	while (true) {
		// up
		for (int col = left; col <= right; col++) spiral[k++] = matrix[up][col];
		if (++up > down) break;
		// right
		for (int row = up; row <= down; row++) spiral[k++] = matrix[row][right];
		if (--right < left) break;
		// down
		for (int col = right; col >= left; col--) spiral[k++] = matrix[down][col];
		if (--down < up) break;
		// left
		for (int row = down; row >= up; row--) spiral[k++] = matrix[row][left];
		if (++left > right) break;
	}
	return spiral;


}


void main()
{
	vector<vector<int>> test = {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{7, 8, 9 }
	};
	spiralOrder(test);

}