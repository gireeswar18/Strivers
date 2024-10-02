#include <bits/stdc++.h>
using namespace std;

void findCombination(int ind, vector<int> &arr, int t, vector<vector<int>> &res, vector<int> ds)
{
	if (ind == arr.size()) {
		if (t == 0) {
			res.push_back(ds);
		}
		return;
	}

	if (arr[ind] <= t)
	{
		ds.push_back(arr[ind]);
		findCombination(ind, arr, t - arr[ind], res, ds);
		ds.pop_back();
	}
	findCombination(ind + 1, arr, t, res, ds);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
	vector<vector<int>> res;
	vector<int> ds;

	findCombination(0, candidates, target, res, ds);

	return res;
}

int main()
{
	// freopen("../input.txt", "r", stdin);
	// freopen("../output.txt", "w", stdout);

	vector<int> v{2, 3, 5, 7};
	int target = 7;

	vector<vector<int>> res = combinationSum(v, target);

	for (vector<int> x : res) {
		for (int num : x)
			cout << num << " ";
		cout << endl;
	}
}