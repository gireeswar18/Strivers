#include<iostream>
using namespace std;

void printNum(int i, int n) {
	if (n < i)
		return;

	printNum(i + 1, n);
	cout << i << endl;
}

int main() {
	int n;
	cin >> n;

	printNum(1, n);
}