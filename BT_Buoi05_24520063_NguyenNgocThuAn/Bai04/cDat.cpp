//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cDat.h"
using namespace std;

//nhom ham khoi tao
cDat::cDat(char a, double b) :loai_dat(a), thanhtien(b) {}

//nhom ham set get
void cDat::set_loai_dat(const char& a) {
	loai_dat = a;
}
char cDat::get_loai_dat() {
	return loai_dat;
}
void cDat::set_thanhtien(const double& b) {
	thanhtien = b;
}
double cDat::get_thanhtien() {
	return thanhtien;
}


//nhom ham xu li
void cDat::Nhap() {
	cGiaoDich::Nhap();
	cout << "Nhap loai dat ('A' or 'B' or 'C'): ";
	cin >> loai_dat;
	if (loai_dat == 'A') thanhtien = dien_tich * dongia * 1.5;
	else thanhtien = dien_tich * dongia;
	
	return;
}
void cDat::Xuat() {
	cGiaoDich::Xuat();
	cout << "\nLoai dat: " << loai_dat;
	cout << "\nThanh tien: " << thanhtien <<" dong.";

	return;
}