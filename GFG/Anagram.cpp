#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	bool areAnagrams(string &s1, string &s2)
	{
		if (s1.length() != s2.length())
			return false;

		vector<int> arr(26, 0);

		int n = s1.length();

		for (int i = 0; i < n; i++)
		{
			arr[s1[i] - 'a']++;
		}

		for (int i = 0; i < n; i++)
		{
			if (arr[s2[i] - 'a'] == 0) return false;

			arr[s2[i] - 'a']--;
		}

		return true;
	}
};