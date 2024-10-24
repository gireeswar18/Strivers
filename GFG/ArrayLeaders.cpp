#include <bits/stdc++.h>
using namespace std;

class Solution
{
	// Function to find the leaders in the array.
public:
	vector<int> leaders(vector<int> &arr)
	{
		// Code here

		vector<int> res;
		int n = arr.size();
		int max = arr[n - 1];
		int ind = 0;

		for (int i = n - 1; i >= 0; i--)
		{
			if (arr[i] >= max)
			{
				max = arr[i];
				res.push_back(max);
			}
		}

		int i = 0, j = res.size() - 1;

		while (i < j) {
			int temp = res[i];
			res[i] = res[j];
			res[j] = temp;
			i++;
			j--;
		}

		return res;
	}
};