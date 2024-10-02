#include<bits/stdc++.h>
using namespace std;

void mergeSort(int[], int, int);
void merge(int[], int, int, int);

int main() {

	int n;

	cout << "Enter array size: " << endl;
	cin >> n;

	int arr[n];
	cout << "Enter the elements one by one: " << endl;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	mergeSort(arr, 0, n - 1);

	for (int num : arr)
		cout << num << " ";
}

void mergeSort(int arr[], int low, int high) {
	if (low < high) {
		int mid = (low + high) / 2;

		mergeSort(arr, low, mid);
		mergeSort(arr, mid + 1, high);

		merge(arr, low, mid, high);
	}
}

void merge(int arr[], int low, int mid, int high) {
	int i = low, j = mid + 1;
	int ind = 0;
	int t[high - low + 1];

	while (i <= mid && j <= high) {
		if (arr[i] < arr[j]) {
			t[ind] = arr[i++];
		}
		else {
			t[ind] = arr[j++];
		}
		ind++;
	}

	while (i <= mid) {
		t[ind++] = arr[i++];
	}
	while (j <= high) {
		t[ind++] = arr[j++];
	}
	ind = 0;
	for (int k = low; k <= high; k++) {
		arr[k] = t[ind++]; 
	}
}