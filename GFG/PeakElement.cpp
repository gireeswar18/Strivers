#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int peakElement(int arr[], int n) {

		if (n == 1) return 0;
        
		for (int i = 0; i < n; i++) {
			if (i == 0 && n > 1 && arr[i] >= arr[i + 1])
				return i;
			else if (i == n - 1 && n > 1 && arr[i] >= arr[i - 1])
				return i;
			else if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
				return i;
		}

		return -1;
    }
};