#include<iostream>
using namespace std;

void printMyName(int i, int n) {

	if (i <= n) {
		cout << "Gireeswar" << endl;
		printMyName(i + 1, n);
	}

}

int main() {
	int n;

	cin >> n;

	printMyName(1, n);

}