//Given an absolute path for a file(Unix - style), simplify it.
//
//For example,
//path = "/home/", = > "/home"
//path = "/a/./b/../../c/", = > "/c"
//click to show corner cases.
//
//Corner Cases :
//Did you consider the case where path = "/../" ?
//In this case, you should return "/".
//Another corner case is the path might contain multiple slashes '/' together, such as "/home//foo/".
//In this case, you should ignore redundant slashes and return "/home/foo".


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
using namespace std;

string simplifyPath(string path) {
	const char* p = path.c_str();
	string res = "/";
	vector<string> full_path;
	char* addr = strtok((char*)p, "/");
	int cur = 0, size = 0;
	while (addr) {
		if (strcmp(addr, ".") == 0) {
		}
		else if (strcmp(addr, "..") == 0) {
			cur > 0 ? cur-- : cur;
		}
		else {
			if (cur == size) {
				full_path.push_back(addr);
				cur++;
				size++;
			}
			else {
				full_path[cur++] = addr;
			}
		}
		addr = strtok(NULL, "/");
	}
	for (int i = 0; i < cur; i++) {
		res = res + full_path[i] + "/";
	}
	return res.size() == 1 ? res : res.substr(0, res.size() - 1);
}

void main()
{
	cout << simplifyPath("/a/./b/../../c/");
	char s[] = "ab-cd : ef;gh :i-jkl;mnop;qrs-tu: vwx-y;z";
	char *delim = "-: ";
	char *p;
	printf("%s ", strtok(s, delim));
	while ((p = strtok(NULL, delim)))
		printf("%s ", p);
	printf("\n");
}