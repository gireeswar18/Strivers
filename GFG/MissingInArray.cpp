#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int missingNumber(vector<int>& arr) {

        int n = arr.size() + 1;
        int total = (n * (n + 1)) / 2;

		for (int num : arr) {
			total -= num;
		}

        return total;
    }
};