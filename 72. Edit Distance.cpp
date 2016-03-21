//Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in place.
//
//click to show follow up.
//
//Follow up :
//Did you use extra space ?
//A straight forward solution using O(mn) space is probably a bad idea.
//A simple improvement uses O(m + n) space, but still not the best solution.
//Could you devise a constant space solution ?


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
	int minDistance(string word1, string word2) {
		int m = word1.length(), n = word2.length();
		vector<int> cur(m + 1, 0);
		for (int i = 1; i <= m; i++)
			cur[i] = i;
		for (int j = 1; j <= n; j++) {
			int pre = cur[0];
			cur[0] = j;
			for (int i = 1; i <= m; i++) {
				int temp = cur[i];
				if (word1[i - 1] == word2[j - 1])
					cur[i] = pre;
				else cur[i] = min(pre + 1, min(cur[i] + 1, cur[i - 1] + 1));
				pre = temp;
			}
		}
		return cur[m];
	}
};

void main()
{

}