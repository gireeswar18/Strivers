#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void sort012(vector<int>& arr) {
		int n = arr.size();
        int i = 0, zero = -1, two = n;

		while (i < two) {
			if (arr[i] == 0) {
				arr[i] = arr[++zero];
				arr[zero] = 0;
				i++;
			}
			else if (arr[i] == 2) {
				arr[i] = arr[--two];
				arr[two] = 2;
			}
			else {
				i++;
			}
		}
    }
};