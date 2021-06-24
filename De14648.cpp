#include <bits/stdc++.h>
#define MAX 100
using namespace std;

class ThietBi{
	private:
		char maTB[10];
		char tenTB[30];
		char tinhTrang[30];
		int soLuong;
	public:
		void Nhap() {
			cout << "\nNhap vao ma thiet bi: ";	fflush(stdin);	gets(maTB) ;
			cout << "\nNhap vao ten thiet bi: ";	fflush(stdin);	gets(tenTB) ;
			cout << "\nNhap vao tinh trang: ";	fflush(stdin);	gets(tinhTrang) ;
			cout << "\nNhap vao so luong: ";	cin >> soLuong;
		}
		void Xuat() {
			cout << maTB << setw(15) << tenTB << setw(15)
				 << tinhTrang << setw(20) << soLuong << endl;
		}
		friend int tongTB(ThietBi t[], int n) {
			int sum = 0;
			for (int i = 0; i < n; ++i)
				sum += t[i].soLuong;
			return sum;
		}
};

class Phieu{
	private:
		char ngayLap[15];
		char nguoiLap[30];
		char maPhong[10];
		char tenPhong[20];
		char tenQL[30];
		int n;
		ThietBi x[MAX];
	public:
		void Nhap() {
			cout << "Nhap vao ngay lap: ";	fflush(stdin);	gets(ngayLap);
			cout << "\nNhap vao nguoi lap: ";	fflush(stdin);	gets(nguoiLap);
			cout << "\nNhap vao ma phong: ";	fflush(stdin);	gets(maPhong) ;
			cout << "\nNhap vao ten phong: ";	fflush(stdin);	gets(tenPhong) ;
			cout << "\nNhap vao ten QL: ";	fflush(stdin); gets(tenQL);
			cout << "\nNhap vao so thiet bi: ";	cin >> n;
			for (int i = 0; i < n; i++)
				x[i].Nhap();
		}
		void Xuat() {
			cout << "\n\n\nTRUONG DHCNHN\n" << setw(40)
				 << "BANG THONG KE THIET BI\n"
				 << "Ngay lap: " << ngayLap << setw(40)
				 << "Nguoi lap: " << nguoiLap 
				 << "\nMa phong may: " << maPhong << setw(40)
				 << "Ten phong: " << tenPhong 
				 << "\nTen nguoi quan ly: " << tenQL
				 << "\nChi tiet: \n"
				 << "Ma thiet bi" << setw(15) << "Ten thiet bi"
				 << setw(15) << "Tinh trang" << setw(20)
				 << "So luong\n";
			for (int i = 0; i < n; i++)
				x[i].Xuat();
			cout << "\nTong so luong thiet bi: " << setw(40) << tongTB(x, n);
			cout << "\n\n" << setw(10) << "Giam hieu" << setw(30)
				 << "Khoa CNTT" << setw(30) << "Nguoi lap\n";
		}
};

int main() {
	Phieu p;
	p.Nhap();
	p.Xuat();
	return 0;
}

