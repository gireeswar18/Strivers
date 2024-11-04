#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    int equilibriumPoint(vector<long long> &arr) {

		long long leftSum = 0, rightSum = 0;

		for (long long num : arr) {
			rightSum += num;
		}

		for (int i = 0; i < arr.size(); i++) {
			rightSum -= arr[i];
			if (leftSum == rightSum) return i + 1;
			leftSum += arr[i];
		}

		return -1;
    }
};