//Given two words(beginWord and endWord), and a dictionary's word list, find the length of shortest transformation sequence from beginWord to endWord, such that:
//
//Only one letter can be changed at a time
//Each intermediate word must exist in the word list
//For example,
//
//Given:
//beginWord = "hit"
//endWord = "cog"
//wordList = ["hot", "dot", "dog", "lot", "log"]
//As one shortest transformation is "hit" -> "hot" -> "dot" -> "dog" -> "cog",
//return its length 5.
//
//Note :
//	 Return 0 if there is no such transformation sequence.
//	 All words have the same length.
//	 All words contain only lowercase alphabetic characters.
//

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


struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
	void solve(vector<vector<char>>& board) {
		int i, j;
		int row = board.size();
		if (!row)
			return;
		int col = board[0].size();

		for (i = 0; i < row; ++i){
			check(board, i, 0, row, col);
			if (col > 1)
				check(board, i, col - 1, row, col);
		}
		for (j = 1; j + 1 < col; ++j){
			check(board, 0, j, row, col);
			if (row > 1)
				check(board, row - 1, j, row, col);
		}
		for (i = 0; i < row; ++i)
			for (j = 0; j < col; ++j)
				if (board[i][j] == 'O')
					board[i][j] = 'X';
		for (i = 0; i < row; ++i)
			for (j = 0; j < col; ++j)
				if (board[i][j] == '1')
					board[i][j] = 'O';
	}
	void check(vector<vector<char> >&vec, int i, int j, int row, int col){
		if (vec[i][j] == 'O'){
			vec[i][j] = '1';
			if (i > 1)
				check(vec, i - 1, j, row, col);
			if (j > 1)
				check(vec, i, j - 1, row, col);
			if (i + 1 < row)
				check(vec, i + 1, j, row, col);
			if (j + 1 < col)
				check(vec, i, j + 1, row, col);
		}
	}
};
void main()
{

}