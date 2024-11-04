#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	vector<int> removeDuplicate(vector<int> &arr)
	{
		unordered_set<int> set;
		vector<int> res;

		for (int num : arr)
		{
			if (set.find(num) == set.end())
			{
				res.push_back(num);
			}
			set.insert(num);
		}

		return res;
	}
};