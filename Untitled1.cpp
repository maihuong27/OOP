#include <iostream>
using namespace std;

int B(int a) {
	if (a <10)	return a;
	else return B(a/10) + a%10;
}

int main() {
	int a;
	cin >> a;
	cout << B(a);
	return 0;
}
