#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> alternateSort(vector<int>& arr) {
        vector<int> res;
		sort(arr.begin(), arr.end());
		int i = 0, j = arr.size() - 1;

		while (i < j) {
			res.push_back(arr[j--]);
			res.push_back(arr[i++]);
		}

		if (i == j)
			res.push_back(arr[i]);

		return res;
    }
};