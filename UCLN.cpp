#include <iostream>
using namespace std;

int U(int a, int b){
	if (a == 0 || b == 0)	return a + b;
	else if (a > b)	return U(a%b, b);
	else if (a < b)	return U(a, b%a);
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << U(a, b);
	return 0;
}
