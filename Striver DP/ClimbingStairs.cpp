#include<bits/stdc++.h>
using namespace std;

int climb(int n) {
	if (n == 0 || n == 1) return n;
	int dp[n + 1];

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i -2];

	return dp[n];
}
// 2 1 1 0
// _ _ _ 

int main () {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	cin >> n;

	cout << climb(n);

}