//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cSTK.h"

using namespace std;

//nhom ham khoi tao
cSTK::cSTK(double a, double b) :thue(a), thanhtien(b) {}

//nhom ham get set
void cSTK::set_thue(const double& a) {
	thue = a;
}
void cSTK::set_thanhtien(const double& b) {
	thanhtien = b;
}
double cSTK::get_thue() {
	return thue;
}
double cSTK::get_thanhtien() {
	return thanhtien;
}


//nhom ham xu li
void cSTK::Nhap() {
	cSach::Nhap();
	cout << "Nhap tien thue: ";
	cin >> thue;
	thanhtien = so_luong * don_gia + thue;

	return;
}
void cSTK::Xuat() {
	cSach::Xuat();
	cout << "\nTien thue: " << thue <<" dong";
	cout << "\nThanh tien: " << thanhtien <<" dong";
}