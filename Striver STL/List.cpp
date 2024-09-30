#include <bits/stdc++.h>
using namespace std;

int main() {

	list<int> l;

	l.push_back(10);
	l.push_front(0);

	for (int n : l)
		cout << n << " ";
}