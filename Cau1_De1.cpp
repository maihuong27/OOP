#include <bits/stdc++.h>
using namespace std;

class CauThu;

class NgaySinh {
	private:
		int ngay, thang, nam;
	public:
		void Nhap() {
			cout << "Nhap vao ngay sinh: ";	cin >> ngay;
			cout << "Nhap vao thang sinh: ";	cin >> thang;
			cout << "Nhap vao nam sinh: ";	cin >> nam;
		}
		void Xuat() {
			cout << setw(15) << ngay << "/" << thang << "/" << nam;
		}
};

class Person {
	protected:
		char hoTen[50];
		NgaySinh x;
		char queQuan[100];
	public:
		void Nhap() {
			cout << "Nhap vao ho ten: ";	fflush(stdin);	gets(hoTen);
			x.Nhap();
			cout << "Nhap vao que quan: ";	fflush(stdin);	gets(queQuan);
		}
		void Xuat() {
			cout << hoTen;
			x.Xuat();
			cout << setw(15) << queQuan;
		}
		
};

class VanDongVien : public Person {
	protected:
		char boMon[30];
		float thuNhap;
	public:
		void Nhap() {
			Person::Nhap();
			cout << "Nhap vao bo mon: ";	fflush(stdin);	gets(boMon);
			cout << "Nhap vao thu nhap: ";	cin >> thuNhap;
		}
		
		void Xuat() {
			Person::Xuat();
			cout << setw(15) << boMon;
			cout << setw(15) << thuNhap;
		}
};

class CauThu : public VanDongVien {
	private:
		char clb[100];
		char viTri[100];
	public:
		void Nhap();
		void Xuat();
		friend void CauThuTT(CauThu a[], int n);
		friend void ThuNhap(CauThu a[], int n);
};


void CauThu :: Nhap(){
	VanDongVien::Nhap();
	cout << "Nhap vao clb: ";	fflush(stdin);	gets(clb);
	cout << "Nhap vao vi tri: ";	fflush(stdin);	gets(viTri);
	cout << endl;
}

void CauThu::Xuat(){
	VanDongVien::Xuat();
	cout << setw(15) << clb << setw(15) << viTri << endl;
}

void CauThuTT(CauThu a[], int n) {
	for (int i = 0; i < n; i++) 
		if (strcmp(a[i].clb, "T&T") == 0) a[i].Xuat();
	
}

void ThuNhap(CauThu a[], int n) {
	CauThu maxMoney = a[0];
	for (int i = 0; i < n; i++)
		if(a[i].thuNhap > maxMoney.thuNhap) maxMoney = a[i];
	maxMoney.Xuat();
}

int main() {
	CauThu a[100];
	int n;
	cout << "Nhap vao so cau thu: ";	cin >> n;
	cout << "Nhap vao thong tin cac cau thu: \n";
	for (int i = 0; i < n; i++)	a[i].Nhap();
	cout << "\nTHONG TIN CAC CAU THU:\n";
	cout << "Ho Ten" << setw(15) << "Ngay Sinh" << setw(15)
		 << "Que Quan" << setw(15) << "Bo Mon" << setw(15)
		 << "Thu Nhap" << setw(15) << "CLB" << setw(15) << "Vi tri" << endl;
	for (int i = 0; i < n; i++)	a[i].Xuat();
	
	cout << "\nTHONG TIN CAC CAU THU O CLB T&T:\n";
	cout << "Ho Ten" << setw(15) << "Ngay Sinh" << setw(15)
		 << "Que Quan" << setw(15) << "Bo Mon" << setw(15)
		 << "Thu Nhap" << setw(15) << "CLB" << setw(15) << "Vi tri" << endl;
	CauThuTT(a, n);
	
	cout << "\nTHONG TIN CAU THU CO THU NHAP CAO NHAT:\n";
	cout << "Ho Ten" << setw(15) << "Ngay Sinh" << setw(15)
		 << "Que Quan" << setw(15) << "Bo Mon" << setw(15)
		 << "Thu Nhap" << setw(15) << "CLB" << setw(15) << "Vi tri" << endl;
	ThuNhap(a, n);
	return 0;
}
