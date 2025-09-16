//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cNhaPho.h"
using namespace std;


cNhaPho::cNhaPho(std::string a, Date b, unsigned long long c, unsigned short d, unsigned long long e, double f, bool g, std::string h) :cGiaoDich(a, b, c, d, e, f), caocap(g), diachi(h) {}

void cNhaPho::set_caocap(const bool& a) {
	caocap = a;
}
void cNhaPho::set_diachi(const std::string& b) {
	diachi = b;
}

bool cNhaPho::get_caocap() {
	return caocap;
}
std::string cNhaPho::get_diachi() {
	return diachi;
}

void cNhaPho::Nhap() {
	cGiaoDich::Nhap();
	cout << "Nhap ('1' - nha cao cap) ('0' - nha thuong): ";
	cin >> caocap;
	cout << "Nhap dia chi nha: ";
	cin.ignore();
	getline(cin, diachi);
	tinh_thanhtien();

	return;
}
void cNhaPho::Xuat() {
	cGiaoDich::Xuat();
	cout << "\nLoai nha: ";
	if (caocap) cout << "cao cap";
	else cout << "thuong";
	cout << "\nDia chi nha: " << diachi;
	cout << "\nThanh tien: " << thanh_tien;

	return;
}
void cNhaPho::tinh_thanhtien() {
	if (caocap) thanh_tien = dientich * don_gia;
	else thanh_tien = dientich * don_gia * 0.9;

	return;
}