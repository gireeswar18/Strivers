#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	vector<int> findDuplicates(vector<int> &arr)
	{
		// code here

		sort(arr.begin(), arr.end());

		vector<int> res;

		for (int i = 1; i < arr.size(); i++)
		{
			if (arr[i] == arr[i - 1])
			{
				if (res.size() != 0)
				{
					if (res.at(res.size() - 1) != arr[i])
					{
						res.push_back(arr[i]);
					}
				}
				else {
					res.push_back(arr[i]);
				}
			}
		}
		return res;
	}
};