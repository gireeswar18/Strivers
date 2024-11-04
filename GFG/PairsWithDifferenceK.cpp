#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countPairsWithDiffK(vector<int>& arr, int k) {
        unordered_map<int, int> map;

		for (int num : arr) {
			if (map.find(num) != map.end()) {
				map[num]++;
			}
			else {
				map[num] = 1;
			}
		}

		int cnt = 0;

		for (int num : arr) {
			if (map.find(num + k) != map.end()) {
				cnt += map[num + k];
			}
		}

		return cnt;
    }
};