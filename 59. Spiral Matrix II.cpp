//Given a string s consists of upper / lower - case alphabets and empty space characters ' ', return the length of last word in the string.
//
//If the last word does not exist, return 0.
//
//Note: A word is defined as a character sequence consists of non - space characters only.
//
//	  For example,
//	  Given s = "Hello World",
//	  return 5.


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
	vector<vector<int>> matrix(n, vector<int>(n));
	int up = 0, down = n - 1, left = 0, right = n - 1, k = 0;
	while (true) {
		// up
		for (int col = left; col <= right; col++)  matrix[up][col] = ++k;
		if (++up > down) break;
		// right
		for (int row = up; row <= down; row++) matrix[row][right] = ++k;
		if (--right < left) break;
		// down
		for (int col = right; col >= left; col--) matrix[down][col] = ++k;
		if (--down < up) break;
		// left
		for (int row = down; row >= up; row--) matrix[row][left] = ++k;
		if (++left > right) break;
	}
	return matrix;
}

void main()
{
	generateMatrix(5);
}