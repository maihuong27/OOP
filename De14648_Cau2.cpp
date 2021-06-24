#include <iostream>
using namespace std;

class TTBH{
	private:
		double a, b, c;
	public:
		TTBH() {
			a = 0;
			b = 0;
			c = 0;
		}
		TTBH(int x, int y, int z) {
			a = x;
			b = y;
			c = z;
		}
		TTBH operator-() {
			TTBH t;
			t.a = -a;
			t.b = -b;
			t.c = -c;
			return t;
		}
		friend istream& operator>>(istream& i, TTBH &t) {
			cout << "Nhap vao he so thu nhat: ";	i >> t.a;
			cout << "Nhap vao he so thu hai: ";	i >> t.b;
			cout << "Nhap vao he so thu ba: ";	i >> t.c;
			return i;
		}
		friend ostream& operator<< (ostream& o, TTBH t) {
			o << t.a << "x2 + " << t.b << "x + " << t.c;
			return o;
		}
};

int main() {
	TTBH t;
	cin >> t;
	cout << -t;
	return 0;
}
