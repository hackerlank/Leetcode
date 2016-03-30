//Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
//
//For example,
//"A man, a plan, a canal: Panama" is a palindrome.
//"race a car" is not a palindrome.
//
//Note:
//Have you consider that the string might be empty ? This is a good question to ask during an interview.
//
//For the purpose of this problem, we define empty string as valid palindrome.


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
bool valid(char in)
{
	if ((in <= 'z' && in >= 'a') || (in <= 'Z' && in >= 'A') || (in <= '9' && in >= '0'))
		return true;
	return false;
}

bool isPalindrome(string s) 
{
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	int len = s.size(), x = 0, y = len - 1;
	while (x<y)
	{
		if (!valid(s[x]))
		{
			++x;
			continue;
		}
		if (!valid(s[y]))
		{
			--y;
			continue;
		}
		if (s[x]!=s[y])
		{
			return false;
		}
		else
		{
			++x;
			--y;
			continue;
		}

	}
	return true;

}


void main()
{
	string test = "A man, a plan, a canal: Panama";
	
	cout << isPalindrome(test);
}