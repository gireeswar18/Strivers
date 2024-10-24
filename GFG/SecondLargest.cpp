#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here

		int first = -1, second = -1;

		for (int num : arr) {
			if (num > first) {
				second = first;
				first = num;
			}
			else if (num > second && num != first) {
				second = num;
			}
		}

		return second;
    }
};