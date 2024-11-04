#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
		int n = arr.size();
		
		priority_queue<pair<int, int>> maxHeap;
		vector<int> res;

		for (int i = 0; i < k; i++) {
			maxHeap.push({arr[i], i});
		}
		res.push_back(maxHeap.top().first);

		for (int i = k; i < n; i++) {
			maxHeap.push({arr[i], i});
			while (maxHeap.top().second <= i - k) {
				maxHeap.pop();
			}
			res.push_back(maxHeap.top().first);
		}

		return res;
    }
};