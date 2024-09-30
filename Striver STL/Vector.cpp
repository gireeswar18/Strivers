#include<bits/stdc++.h>
using namespace std;

void fun() {

	vector<int> v;

	v.push_back(1);
	v.emplace_back(2);

	cout << "normal printing" << endl;
	for (int n : v)
		cout << n << endl;

	vector<pair<int, int>> pairV;

	pairV.push_back({1, 2});
	pairV.emplace_back(3, 4);

	cout << "pair printing" << endl;

	for (pair<int, int> p : pairV) {
		cout << p.first << " " << p.second << endl;
	}

	vector<int> v2(5, 20);

	cout << "iterator printing" << endl;
	for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		cout << *(it) << " ";

	cout << endl;
	cout << "auto printing" << endl;
	for (auto i = v2.begin(); i != v2.end(); i++)
		cout << *(i) << " ";

	v2.erase(v2.begin());

	cout << endl;
	cout << "after delete printing" << endl;
	for (auto i = v2.begin(); i != v2.end(); i++)
		cout << *(i) << " ";

}

int main() {
	fun();
}