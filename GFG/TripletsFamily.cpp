#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        unordered_set<int> set;

		for (int num : arr) {
			set.insert(num);
		}
		int n = arr.size();

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (set.find(arr[i] + arr[j]) != set.end()) {
					return true;
				}
			}
		}

		return false;
    }
};