#include <bits/stdc++.h>
using namespace std;

void makeAll(int ind, int n, int arr[], vector<int> &v, int sum, int k) {
	if (ind == n) {
		if (sum == k) {
			for (auto x : v)
				cout << x << " ";
			cout << endl;
		}
		return;
	}

	v.push_back(arr[ind]);
	makeAll(ind + 1, n, arr, v, sum + arr[ind], k);
	v.pop_back();

	makeAll(ind + 1, n, arr, v, sum, k);
}

int main() {
	int arr[] = {1, 2, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 2;
	vector<int> v;
	makeAll(0, n, arr, v, 0, k);
}