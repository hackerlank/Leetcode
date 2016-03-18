//You are given an n x n 2D matrix representing an image.
//
//Rotate the image by 90 degrees(clockwise).
//
//Follow up :
//Could you do this in - place ?


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
	int len = matrix.size();
	for (int i = 0; i < (len) / 2; ++i)
		swap(matrix[i], matrix[len - i - 1]);
	for (int i = 0; i < len; ++i)
	{
		int len2 = matrix[i].size();
		for (int j = i + 1; j < len2; ++j)
		{
			swap(matrix[i][j], matrix[j][i]);
		}

	}
}
void anti_rotate(vector<vector<int> > &matrix) {
	for (auto vi : matrix) reverse(vi.begin(), vi.end());
	for (int i = 0; i < matrix.size(); ++i) {
		for (int j = i + 1; j < matrix[i].size(); ++j)
			swap(matrix[i][j], matrix[j][i]);
	}
}

void main()
{

}