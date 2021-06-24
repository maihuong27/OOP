#include <bits/stdc++.h>
#define MAX 100
using namespace std;

class TaiSan{
	private:
		char maTS[10];
		char tenTS[20];
		char dvTinh[20];
		int giaTri;
	public:
		void Nhap() {
			cout << "Nhap vao ma TS: ";	fflush(stdin);	gets(maTS);
			cout << "Nhap vao ten TS: ";	fflush(stdin);	gets(tenTS);
			cout << "Nhap don vi tinh: ";	fflush(stdin);	gets(dvTinh);
			cout << "Nhap vao gia tri: ";	cin >> giaTri;
		}
		void Xuat() {
			cout << maTS << setw(20) << tenTS << setw(20)
				 << dvTinh << setw(20) << giaTri << endl;
		}
		friend int tongSoTB(TaiSan x[], int n) {
			int sum = 0;
			for (int i = 0; i < n; i++)
				sum += x[i].giaTri;
			return sum;
		}
};

class Phieu{
	private:
		char ngayLap[20];
		char nguoiLap[20];
		char maDV[20];
		char tenDV[20];
		char diaChi[20];
		char truongDV[20];
		int n;
		TaiSan x[MAX];
	public:
		void Nhap() {
			cout << "Nhap vao ngay nhap: ";	fflush(stdin);	gets(ngayLap);
			cout << "Nhap nguoi lap: ";	fflush(stdin);	gets(nguoiLap);
			cout << "Nhap ma DV: ";	fflush(stdin);	gets(maDV);
			cout << "Nhap vao ten DV: ";	fflush(stdin);	gets(tenDV);
			cout << "Nhao vao dia chi: ";	fflush(stdin);	gets(diaChi);
			cout << "Nhap vao truong DV: ";	fflush(stdin);	gets(truongDV);
			cout << "Nha vao so luong tai san: ";	cin >> n;
			for (int i = 0; i < n; i++)
				x[i].Nhap();
		}
		void Xuat() {
			cout << "\n\nTONG CONG TY ABC\n"
				 << setw(40) << "BANG THONG KE TAI SAN\n"
				 << "Ngay lap: " << ngayLap << setw(30)
				 << "Nguoi lap: " << nguoiLap << "\nMa don vi: "
				 << maDV << setw(30) << "Ten don vi: " << tenDV
				 << "\nDia chi don vi: " << diaChi << setw(30)
				 << "Truong don vi: " << truongDV << "\nChi tiet: \n"
				 << "Ma tai san" << setw(20) << "Ten tai san" << setw(20)
				 << "Don vi tinh" << setw(20) << "Gia tri" << endl;
				 for (int i = 0; i < n; i++)
				 	x[i].Xuat();
				cout << "\nTong so luong thiet bi: " <<	setw(30) 
					 << tongSoTB(x, n) << "\n\nGiam doc" << setw(20)
					 << "Phong quan ly" << setw(20) << "Nguoi lap\n";
		}
};

int main() {
	Phieu p;
	p.Nhap();
	p.Xuat();
	return 0;
}
