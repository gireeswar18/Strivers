#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
		if (arr.size() == 1) return arr[0];

        int targetCount = arr.size() / 2;

		unordered_map<int, int> mp;

		for (int num : arr) {
			if (mp.find(num) != mp.end()) {
				mp[num] = mp[num] + 1;
			}
			else {
				mp[num] = 1;
			}
			if (mp[num] > targetCount)
				return num;
		}

		return -1;
    }
};