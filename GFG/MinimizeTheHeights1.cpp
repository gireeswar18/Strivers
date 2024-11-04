#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getMinDiff(int k, vector<int> &arr) {
        sort(arr.begin(), arr.end());

		int n = arr.size();

		int minDiff = arr[n - 1] - arr[0];

		for (int i = 1; i < n; i++) {
			if (arr[i] < k) continue;

			   
        int MIN = min(arr[0] + k, arr[i] - k);
        int MAX = max(arr[i-1] + k, arr[n-1] - k);

		minDiff = min(minDiff, MAX - MIN);
		}

		return minDiff;
    }
};