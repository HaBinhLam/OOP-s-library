//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cSGK.h"

using namespace std;

//nhom ham khoi tao
cSGK::cSGK(bool a, double b) :old(a), thanhtien(b) {}

//nhom ham set get
void cSGK::set_old(const bool& a) {
	old = a;
}
void cSGK::set_thanhtien(const double& b) {
	thanhtien = b;
}
bool cSGK::get_old() {
	return old;
}
double cSGK::get_thanhtien() {
	return thanhtien;
}


//nhom ham xu li
void cSGK::Nhap() {
	cSach::Nhap();
	cout << "Nhap 1 neu la sach cu, 0 neu la sach moi: ";
	cin >> old;
	if (old) {
		thanhtien = so_luong * don_gia * 0.5;
	}
	else {
		thanhtien = so_luong * don_gia;
	}
	return;
}
void cSGK::Xuat() {
	cSach::Xuat();
	cout << "\nTinh trang sach: " << ((old) ? " cu" : " moi");
	cout << "\nThanh tien: " << thanhtien <<" dong";

	return;
}
