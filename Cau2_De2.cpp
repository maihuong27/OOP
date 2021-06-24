#include <bits/stdc++.h>
using namespace std;

class Diem{
	private:
		float x, y, z;
	public:
		Diem() {
			x = 0;
			y = 0;
			z = 0;
		}
		Diem(float a, float b, float c) {
			x = a;
			y = b;
			z = c;
		}
		Diem operator+(Diem m);
		friend istream& operator>>(istream& x, Diem &m);
		friend ostream& operator<<(ostream& x, Diem m);
};

Diem Diem::operator+(Diem m) {
	Diem kq;
	kq.x = x + m.x;
	kq.y = y + m.y;
	kq.z = z + m.z;
	return kq;
}

istream& operator>>(istream& x, Diem &m) {
	cout << "Nhap vao toa do khong gian 1 diem: ";
	x >> m.x >> m.y >> m.z;
	return x;
}

ostream& operator<<(ostream& x, Diem m) {
	cout << "Toa do cua diem: ";
	x << "{" << m.x << ", " << m.y << ", " << m.z << "}\n";
	return x;
}

int main() {
	Diem M, N, Q;
	cin >> M >> N;
	Q = M + N;
	cout << Q;
	return 0;
}
