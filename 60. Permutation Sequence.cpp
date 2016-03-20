//The set[1, 2, 3, …, n] contains a total of n!unique permutations.
//
//By listing and labeling all of the permutations in order,
//We get the following sequence(ie, for n = 3) :
//
//"123"
//"132"
//"213"
//"231"
//"312"
//"321"
//Given n and k, return the kth permutation sequence.
//
//Note: Given n will be between 1 and 9 inclusive.

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
using namespace std;

string getPermutation(int n, int k) {
	string res;
	string nums = "123456789";
	int f[10] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };
	--k;
	for (int i = n; i >= 1; --i) {
		int j = k / f[i - 1];
		k %= f[i - 1];
		res.push_back(nums[j]);
		nums.erase(nums.begin() + j);
	}
	return res;
}

void main()
{
	cout<<getPermutation(3, 6);
}