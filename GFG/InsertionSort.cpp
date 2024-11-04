#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void insert(int arr[], int i)
    {
        while (i > 0 && arr[i - 1] > arr[i]) {
			swap(arr[i - 1], arr[i]);
			i--;
		}
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        for (int i = 0; i < n; i++) {
			insert(arr, i);
		}
    }
};