#include<bits/stdc++.h>
using namespace std;
// 0 1 1 2 3 5
int fib(int dp[], int n) {
	if (n == 0 || n == 1) return n;

	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n];
}

int main () {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	int dp[n + 1];

	dp[0] = 0;
	dp[1] = 1;

	cout << fib(dp, n);
}