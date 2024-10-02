#include <bits/stdc++.h>
using namespace std;

int makeOne(int ind, int n, int arr[], vector<int> &v, int sum, int k) {
	if (ind == n) {
		if (sum == k) {
			return 1;
		}
		return 0;
	}

	v.push_back(arr[ind]);

	int t = makeOne(ind + 1, n, arr, v, sum + arr[ind], k);
	v.pop_back();

	int nT = makeOne(ind + 1, n, arr, v, sum, k);

	return t + nT;
}

int main() {
	int arr[] = {1, 2, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 2;
	vector<int> v;
	cout << makeOne(0, n, arr, v, 0, k);
}