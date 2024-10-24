#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	vector<int> subarraySum(vector<int> &arr, int target)
	{
		// code here
		int l = 0, r = 0, sum = 0, n = arr.size();
		vector<int> res;

		while (r < n)
		{
			sum += arr[r];

			while (sum > target)
			{
				sum -= arr[l];
				l++;
			}
			if (sum == target)
			{
				res.push_back(l + 1);
				res.push_back(r + 1);
				return res;
			}
			r++;
		}
		res.push_back(-1);

		return res;
	}
};