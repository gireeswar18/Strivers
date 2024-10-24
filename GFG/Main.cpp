#include <bits/stdc++.h>
#include "KthSmallest.cpp"
using namespace std;

int main()
{
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);

	// test case
	int t;
	cin >> t;

	Solution s;

	while (t-- != 0)
	{
		vector<int> v;
		int n;
		int val;
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> val;
			v.push_back(val);
		}
		int k;
		cin >> k;

		cout << s.kthSmallest(v, k);

		cout << endl;

	}
}