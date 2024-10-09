#include <bits/stdc++.h>
using namespace std;

void findCombination(vector<int> &arr, int target, int ind, vector<vector<int>> &res, vector<int> &ds)
{

	if (target == 0)
	{
		res.push_back(ds);
		return;
	}

	for (int i = ind; i < arr.size(); i++)
	{
		if (i > ind && arr[i] == arr[i - 1])
			continue;
		if (arr[i] > target)
			break;

		ds.push_back(arr[i]);
		findCombination(arr, target - arr[i], i + 1, res, ds);
		ds.pop_back();
	}
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
	vector<vector<int>> res;
	vector<int> ds;

	sort(candidates.begin(), candidates.end());

	findCombination(candidates, target, 0, res, ds);

	return res;
}

int main()
{
	vector<int> c{10, 1, 2, 7, 6, 1, 5};
	int target = 8;

	vector<vector<int>> res = combinationSum2(c, target);

	for (vector<int> v : res)
	{
		for (int num : v)
		{
			cout << num << " ";
		}
		cout << endl;
	}
}