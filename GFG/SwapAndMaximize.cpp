#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
		long long sum = 0;
		int n = arr.size();
		int left = 0;
		int right = n - 1;

		while (left < right) {
			sum += arr[right] - arr[left];
			left++;
			right--;
		}

		return sum * 2;
    }
};