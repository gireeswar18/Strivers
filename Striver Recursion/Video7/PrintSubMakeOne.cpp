#include <bits/stdc++.h>
using namespace std;

bool makeOne(int ind, int n, int arr[], vector<int> &v, int sum, int k) {
	if (ind == n) {
		if (sum == k) {
			for (auto x : v)
				cout << x << " ";
			return true;
		}
		return false;
	}

	v.push_back(arr[ind]);

	if (makeOne(ind + 1, n, arr, v, sum + arr[ind], k))
		return true;
	v.pop_back();

	if (makeOne(ind + 1, n, arr, v, sum, k))
		return true;

	return false;
}

int main() {
	int arr[] = {1, 2, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 2;
	vector<int> v;
	makeOne(0, n, arr, v, 0, k);
}