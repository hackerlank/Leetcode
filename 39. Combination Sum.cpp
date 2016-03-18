//Given a set of candidate numbers(C) and a target number(T), find all unique combinations in C where the candidate numbers sums to T.
//
//The same repeated number may be chosen from C unlimited number of times.
//
//Note:
//All numbers(including target) will be positive integers.
//Elements in a combination(a1, a2, ¡­, ak) must be in non - descending order. (ie, a1 ¡Ü a2 ¡Ü ¡­ ¡Ü ak).
//The solution set must not contain duplicate combinations.
//For example, given candidate set 2, 3, 6, 7 and target 7,
//A solution set is :
//[7]
//[2, 2, 3]

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


class Solution {
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
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
			temp.push_back(candidates[i]);
			recursive(save, temp, candidates, target - candidates[i], i);
			temp.pop_back();
		}


	}


};


void main()
{

}