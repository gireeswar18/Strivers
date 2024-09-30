#include<iostream>
using namespace std;

void printNum(int i, int n) {

	cout << i << endl;

	if (i == n)
		return;
		
	printNum(i + 1, n);
}

int main() {
	int n;

	cout << "Enter n: " << endl;

	cin >> n;

	printNum(1, n);
}