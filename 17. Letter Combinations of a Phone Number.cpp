//Given a digit string, return all possible letter combinations that the number could represent.
//
//A mapping of digit to letters(just like on the telephone buttons) is given below.
//
//Input:Digit string "23"
//  Output : ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
//
//Although the above answer is in lexicographical order, your answer could be in any order you want.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> letterCombinations(string digits) 
{
	vector<string> result;
	if (digits.size() == 0)
		return result;
	result.push_back("");
	const string map[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
	for (int i = 0; i < digits.size(); ++i)
	{
		vector<string> temp;
		for (int j = 0;j<map[digits[i]-'0'].size();++j)
		{
			for (int k = 0; k < result.size(); ++k)
			{
				temp.push_back(result[k] + map[digits[i] - '0'][j]);
			}
		
		}
		result = temp;
	}
	return result;
}

void main()
{
	letterCombinations("");
}