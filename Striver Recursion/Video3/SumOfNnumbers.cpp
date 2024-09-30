#include<iostream>
using namespace std;

void sumPara(int n, int sum) {

	if (n == 0) {
		cout << sum;
		return;
	}

	sumPara(n - 1, sum + n);
}

int sumFun(int n) {
	if (n == 0) {
		return 0;
	}
	
	return n + sumFun(n - 1);

}

int main() {
	int n;
	cin >> n;

	sumPara(n, 0);

	cout << endl;

	cout << sumFun(n);
}