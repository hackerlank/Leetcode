//Write an efficient algorithm that searches for a value in an m x n matrix.This matrix has the following properties :
//
//Integers in each row are sorted from left to right.
//The first integer of each row is greater than the last integer of the previous row.
//For example,
//
//Consider the following matrix :
//
//[
//	[1, 3, 5, 7],
//	[10, 11, 16, 20],
//	[23, 30, 34, 50]
//]
//Given target = 3, return true.


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
using namespace std;

class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		int n = matrix.size(), m = matrix[0].size(), left = 0, right = n*m - 1;
		while (left < right)
		{
			int mid = (left + right) / 2;
			if (matrix[mid / m][mid%m] < target)
			{
				left = mid + 1;
			}
			else
			{
				right = mid;
			}


		}
		return matrix[left / m][left%m] == target;

	}
};

void main()
{

}