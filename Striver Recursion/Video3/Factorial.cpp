#include<iostream>
using namespace std;

void factPara(int n, int res) {
	if (n == 0) {
		cout << res;
		return;
	}

	factPara(n - 1, res * n);
}

int factFun(int n) {
	if (n == 0)
		return 1;
	
	return n * factFun(n - 1);
}

int main() {
	int n;
	cin >> n;

	factPara(n, 1);

	cout << endl;

	cout << factFun(n);
}