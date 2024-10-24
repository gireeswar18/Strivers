#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

class Solution
{
public:
	int maxSubarraySum(vector<int> &arr)
	{
		int max = numeric_limits<int>::min();
		int sum = 0;

		for (int num : arr)
		{
			sum += num;
			if (sum > max)
				max = sum;
			if (sum < 0)
				sum = 0;
		}

		return max;
	}
};