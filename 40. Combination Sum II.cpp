//Given a collection of candidate numbers(C) and a target number(T), find all unique combinations in C where the candidate numbers sums to T.
//
//Each number in C may only be used once in the combination.
//
//Note:
//All numbers(including target) will be positive integers.
//Elements in a combination(a1, a2, ¡­, ak) must be in non - descending order. (ie, a1 ¡Ü a2 ¡Ü ¡­ ¡Ü ak).
//The solution set must not contain duplicate combinations.
//For example, given candidate set 10, 1, 2, 7, 6, 1, 5 and target 8,
//A solution set is :
//[1, 7]
//[1, 2, 5]
//[2, 6]
//[1, 1, 6]

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


class Solution {
public:
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		sort(candidates.begin(), candidates.end());
		vector<vector<int>> save;
		vector<int> temp;
		int index = 0;
		recursive(save, temp, candidates, target, index);
		return save;
	}
	void recursive(vector<vector<int>> &save, vector<int> &temp, vector<int> &candidates, int target, int index)
	{
		if (target < 0) return;
		if (target == 0)
		{
			save.push_back(temp);
			return;
		}

		for (int i = index; i < candidates.size(); ++i)
		{
			if (i == index || candidates[i] != candidates[i - 1])
			{
				temp.push_back(candidates[i]);
				recursive(save, temp, candidates, target - candidates[i], i + 1);
				temp.pop_back();
			}
		}


	}



};


void main()
{

}