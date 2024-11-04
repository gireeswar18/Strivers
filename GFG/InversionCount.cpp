#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	void merge(vector<int> &arr, int low, int mid, int high, int &cnt)
	{
		int i = low, j = mid + 1;
		vector<int> v;

		while (i <= mid && j <= high)
		{
			if (arr[i] <= arr[j])
			{
				v.push_back(arr[i]);
				i++;
			}
			else
			{
				v.push_back(arr[j]);
				cnt += (mid - i + 1);
				j++;
			}
		}

		while (i <= mid)
		{
			v.push_back(arr[i]);
			i++;
		}

		while (j <= high)
		{
			v.push_back(arr[j]);
			j++;
		}
		int ind = 0;
		for (int k = low; k <= high; k++) {
			arr[k] = v[ind++];
		}
	}

public:
	void mergeSort(vector<int> &arr, int low, int high, int &cnt)
	{
		if (low < high)
		{
			int mid = (low + high) / 2;
			mergeSort(arr, low, mid, cnt);
			mergeSort(arr, mid + 1, high, cnt);
			merge(arr, low, mid, high, cnt);
		}
		
	}

public:
	int inversionCount(vector<int> &arr)
	{
		int cnt = 0;

		mergeSort(arr, 0, arr.size() - 1, cnt);

		
		return cnt;
	}
};