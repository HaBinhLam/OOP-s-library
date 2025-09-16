//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cCanHo.h"
using namespace std;

//nhom ham khoi tao
cCanHo::cCanHo(string a, unsigned short b) :ma_can(a), vitri_tang(b) {}

//nhom ham set get
void cCanHo::set_ma_can(const string& a) {
	ma_can = a;
}
void cCanHo::set_vitri_tang(const unsigned short& b) {
	vitri_tang = b;
}
string cCanHo::get_ma_can() {
	return ma_can;
}
unsigned short cCanHo::get_vitri_tang() {
	return vitri_tang;
}
void cCanHo::set_thanhtien(const double& b) {
	thanhtien = b;
}
double cCanHo::get_thanhtien() {
	return thanhtien;
}
//nhom ham xu ly
void cCanHo::Nhap() {
	cGiaoDich::Nhap();
	cout << "Nhap ma can ho: ";
	cin.ignore();
	getline(cin, ma_can);
	cout << "Nhap vi tri tang: ";
	cin >> vitri_tang;

	if (vitri_tang == 1) thanhtien = dien_tich * dongia * 2;
	else if (vitri_tang >= 15) thanhtien = dien_tich * dongia * 1.2;
	else {
		thanhtien = dien_tich * dongia;
	}

	return;
}
void cCanHo::Xuat() {
	cGiaoDich::Xuat();
	cout << "\nMa can ho: " << ma_can;
	cout << "\nVi tri tang: " << vitri_tang;
	cout << "\nThanh tien: " << thanhtien;

	return;
}
