#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minJumps(vector<int>& arr) {

		if (arr[0] == 0) return -1;
		
		int steps = 0;
		int currJump = 0;
		int maxJump = 0;

		for (int i = 0; i < arr.size() - 1; i++) {
			currJump = max(currJump, i + arr[i]);
			if (i == maxJump) {
				steps++;
				maxJump = currJump;
			}
			if (maxJump == arr.size() - 1) return steps;
		}

		return maxJump >= arr.size() - 1 ? steps : -1;
    }
};