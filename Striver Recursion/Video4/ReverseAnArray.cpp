#include<iostream>
using namespace std;

void swap(int arr[], int left, int right) {
	int temp = arr[left];
	arr[left] = arr[right];
	arr[right] = temp;
}

void reverse(int arr[], int left, int right) {

	if (left >= right)
		return;

	swap(arr, left, right);

	reverse(arr, left + 1, right - 1);
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};

	reverse(arr, 0, 4);

	for (int num : arr)
		cout << num << " ";
}