#include <bits/stdc++.h>
using namespace std;

void make(int ind, int n, int arr[], vector<int> v) {

	if (ind == n) {
		for (auto x : v)
			cout << x << " ";
		cout << endl;
		return;
	}

	v.push_back(arr[ind]);
	make(ind + 1, n, arr, v);
	v.pop_back();

	make(ind + 1, n, arr, v);
}

int main()
{
	int arr[] = {1, 2, 3};
	int n = sizeof(arr) / sizeof(arr[0]);

	vector<int> v;
	make(0, n, arr, v);
}