#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
		long sum = 0;
		vector<int> res(2);
		long long n = arr.size();
        vector<int> store(n);
		long total = (n * (n + 1) / 2);

		for (int num : arr) {
			if (store[num - 1] != 0) {
				res[0] = num;
			}
			else {
				store[num - 1] = 1;
				sum += num;
			}
		}

		res[1] = total - sum;

		return res;
    }
};