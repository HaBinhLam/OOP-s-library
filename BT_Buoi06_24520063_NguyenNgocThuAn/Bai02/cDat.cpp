//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cDat.h"

using namespace std;


cDat::cDat(std::string a, Date b, unsigned long long c, unsigned short d, unsigned long long e, double f, char g) :cGiaoDich(a, b, c, d, e, f), loaidat(g) {}
void cDat::set_loaidat(const char& a) {
	loaidat = a;
}
char cDat::get_loaidat() {
	return loaidat;
}

void cDat::Nhap() {
	cGiaoDich::Nhap();
	cout << "Nhap loai dat ('A' or 'B' or 'C'): ";
	cin >> loaidat;
	tinh_thanhtien();

	return;
}
void cDat::Xuat() {
	cGiaoDich::Xuat();
	cout << "\nLoai dat: " << loaidat;
	cout << "\nThanh tien: " << thanh_tien;

	return;
}
void cDat::tinh_thanhtien() {
	if (loaidat == 'A') {
		thanh_tien = dientich * don_gia * 1.5;
	}
	else {
		thanh_tien = dientich * don_gia;
	}
	return;
}