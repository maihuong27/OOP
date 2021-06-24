#include <iostream>
using namespace std;

long NP(int n) {
	if (n == 0)	return 0;
	else return (n%2) + NP(n/2)*10;
}

int main() {
	int n;
	cin >> n;
	cout << NP(n);
	return 0;
}
