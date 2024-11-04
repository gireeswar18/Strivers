#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) {

		unordered_map<int, int> map;

		for (int i = 0; i < arr.size(); i++) {
			if (map.find(arr[i]) == map.end()) {
				map.insert({arr[i], i});
			}
			else {
				if (i - map[arr[i]] <= k) {
					return true;
				}
				else {
					map[arr[i]] = i;
				}
			}
		}
		return false;

    }
};