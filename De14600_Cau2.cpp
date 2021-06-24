#include <iostream>
using namespace std;

class NhiThuc{
	private:
		float a, b;
	public:
		NhiThuc() {
			a = 0;
			b = 0;
		}
		NhiThu(int x, int y) {
			a = x;
			b = y;
		}
		~NhiThuc() {
			a = 0;
			b = 0;
		}
		NhiThuc operator-() {
			NhiThuc n;
			n.a = -a;
			n.b = -b;
			return n;
		}
		friend istream& operator>>(istream& i, NhiThuc &n) {
			cout << "Nhap vao he so thu nhat: ";	i >> n.a;
			cout << "Nhap vao he so thu hai: ";	i >> n.b;
			return i;
		}
		friend ostream& operator<<(ostream& o, NhiThuc n) {
			o << n.a << "x + " << n.b;
			return o;
		}
};

int main() {
	NhiThuc t;
	cin >> t;
	NhiThuc q = -t;
	cout << q;
	return 0;
}
