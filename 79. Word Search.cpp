//Given a 2D board and a word, find if the word exists in the grid.
//
//The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring.The same letter cell may not be used more than once.
//
//For example,
//Given board =
//
//[
//	['A', 'B', 'C', 'E'],
//	['S', 'F', 'C', 'S'],
//	['A', 'D', 'E', 'E']
//]
//word = "ABCCED", ->returns true,
//word = "SEE", ->returns true,
//word = "ABCB", ->returns false.


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <stack>
using namespace std;

class Solution {
public:
	bool exist(vector<vector<char>>& board, string word) {
		for (int i = 0; i < board.size(); ++i)
			for (int j = 0; j < board[0].size(); ++j)
				if (dfs(board, word, i, j))
					return true;
		return false;
	}

	bool dfs(vector<vector<char>> &board, string word, int i, int j)
	{
		if (!word.size())
			return true;
		if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || (word[0] != board[i][j]))
			return false;
		char c = board[i][j];
		board[i][j] = '\0';
		string str = word.substr(1);
		bool result = dfs(board, str, i - 1, j) || dfs(board, str, i + 1, j) || dfs(board, str, i, j - 1) || dfs(board, str, i, j + 1);
		board[i][j] = c;
		return result;


	}


};




void main()
{
	vector<vector<char>> test =
	{
		{ 'A', 'B', 'C', 'E' },
		{ 'S', 'F', 'C', 'S' },
		{ 'A', 'D', 'E', 'E' }
	};
	//cout << exist(test, "SEE") << endl;
	cout << exist(test, "ABCCED") << endl;
	cout << exist(test, "ABCB") << endl;
	vector<vector<char>> test2 =
	{
		{ 'C', 'A', 'A' },
		{ 'A', 'A', 'A' },
		{ 'B', 'C', 'D' },
	};
	cout << exist(test2, "AAB") << endl;
}