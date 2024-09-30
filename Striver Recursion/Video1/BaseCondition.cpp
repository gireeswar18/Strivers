#include <iostream>
using namespace std;

void fun(string, int);

int main() {
	string name = "Gireeswar";
	int count = 10;

	fun(name, count);
}

void fun(string name, int count) {
	if (count == 0)
		return;
	
	cout<<name<<endl;
	fun(name, count - 1);
}