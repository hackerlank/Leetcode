﻿//There are N gas stations along a circular route, where the amount of gas at station i is gas[i].
//
//You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from station i to its next station(i + 1).You begin the journey with an empty tank at one of the gas stations.
//
//Return the starting gas station's index if you can travel around the circuit once, otherwise return -1.
//
//Note:
//The solution is guaranteed to be unique.

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

int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {

	int start = gas.size() - 1;
	int end = 0;
	int sum = gas[start] - cost[start];
	while (start > end) {
		if (sum >= 0) {
			sum += gas[end] - cost[end];
			++end;
		}
		else {
			--start;
			sum += gas[start] - cost[start];
		}
	}
	return sum >= 0 ? start : -1;
}



void main()
{

}