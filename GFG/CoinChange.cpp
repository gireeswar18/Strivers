#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
	long long int count(vector<int> coins, int sum)
	{
		int n = coins.size();
		long long dp[n + 1][sum + 1];

		for (int i = 0; i <= n; i++) {
			dp[i][0] = 1;
		}

		for (int i = 0; i <= sum; i++) {
			dp[0][i] = 0;
		}

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= sum; j++) {
				if (j < coins[i - 1]) {
					dp[i][j] = dp[i - 1][j];
				}
				else {
					dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i - 1]];
				}
			}
		}


		return dp[n][sum];
	}
};