//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cArray.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Nhap so luong phan tu co trong mang: ";
	cin >> n;
	cArray a(n);
	cout << "\nMang ngau nhien duoc tao\n";
	a.xuat_mang();
	cout << "\n------------------------------------\n";

	cout << "\nNhap gia tri muon dem tan suat xuat hien trong mang: ";
	int x;
	cin >> x;
	cout << "\n------------------------------------\n";
	cout<<"\nSo lan xuat hien cua so "<<x<<" la: " << a.dem_solanxuathien(x)<<" lan.\n";

	cout << "\n------------------------------------\n";
	cout << "\nMang ngau nhien la mang " << (a.mang_tangdan() ? "tang dan.\n" : "khong tang dan.\n");

	cout << "\n------------------------------------\n";
	if (a.sole_nhonhat() == 0) {
		cout << "\nMang khong co so le.\n";
	}
	else {
		cout << "\nSo le nho nhat trong mang la: " << a.sole_nhonhat() << endl;
	}

	if (a.songuyento_lonnhat() == 0) {
		cout << "\nKhong co so nguyen to trong mang.\n";
	}
	else {
		cout << "\nSo nguyen to lon nhat trong mang la: " << a.songuyento_lonnhat() << endl;
	}

	cout << "\n------------------------------------\n";
	cout << "\nMang sap xep tang dan: ";
	a.sapxep_tangdan();
	a.xuat_mang();
	cout << endl;

	cout << "\nMang sap xep giam dan: ";
	a.sapxep_giamdan();
	a.xuat_mang();
	cout << endl;

	return 0;
}