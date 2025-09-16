//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cCanHo.h"
using namespace std;


//nhom ham khoi tao
cCanHo::cCanHo(std::string a, Date b, unsigned long long c, unsigned short d, unsigned long long e, double f, std::string g, unsigned short h) :cGiaoDich(a, b, c, d, e, f), ma_canho(g), vitri_tang(h) {}

//nhom ham set get
void cCanHo::set_ma_canho(const std::string& a) {
	ma_canho = a;
}
void cCanHo::set_vitri_tang(const unsigned short& b) {
	vitri_tang = b;
}
std::string cCanHo::get_ma_canho() {
	return ma_canho;
}
unsigned short cCanHo::get_vitri_tang() {
	return vitri_tang;
}


//nhom ham xu ly
void cCanHo::Nhap() {
	cGiaoDich::Nhap();
	cout << "Nhap ma can ho: ";
	cin.ignore();
	getline(cin, ma_canho);
	cout << "Nhap vi tri tang: ";
	cin >> vitri_tang;
	tinh_thanhtien();


	return;
}
void cCanHo::Xuat() {
	cGiaoDich::Xuat();
	cout << "\nMa can ho: " << ma_canho;
	cout << "\nVi tri tang: " << vitri_tang;
	cout << "\nThanh tien: " << thanh_tien;

	return;
}
void cCanHo::tinh_thanhtien() {
	if (vitri_tang == 1) {
		thanh_tien = dientich * don_gia * 2;
	}
	else if (vitri_tang >= 15) {
		thanh_tien = dientich * don_gia * 1.2;
	}
	else {
		thanh_tien = dientich * don_gia;
	}

	return;
}
