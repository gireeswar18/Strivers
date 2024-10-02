#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int findPivot(int arr[], int low, int high) {
	int p = arr[low];

	int i = low;
	int j = high;

	while (i < j) {
		while (i <= high  && arr[i] <= p) {
			i++;
		}
		while (j >= low && arr[j] > p) {
			j--;
		}
		if (i < j)
			swap(arr, i, j);
	}

	swap(arr, low, j);
	return j;
}

void quickSort(int arr[], int low, int high) {
	if (low < high) {

		int pivot = findPivot(arr, low, high);

		quickSort(arr, low, pivot - 1);
		quickSort(arr, pivot + 1, high);

	}
}

int main() {
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);

	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	quickSort(arr, 0, n - 1);

	for (int x : arr)
		cout << x << " ";
}