#include <bits/stdc++.h>
using namespace std;

int main() {

	vector<int> v1;

	v1.push_back(1);
	v1.emplace_back(2);

	v1.insert(v1.begin(), 0);

	vector<int> v2;

	v2.insert(v2.begin(), v1.begin(), v1.end());

	for (int n : v2)
		cout << n << " ";

}