//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cNhaPho.h"
using namespace std;

cNhaPho::cNhaPho(bool a, string b, double c) :loai_nha_caocap(a), dia_chi(b), thanhtien(c) {}

//nhom ham set get
void cNhaPho::set_loai_nha(const bool& a) {
	loai_nha_caocap = a;
}
void cNhaPho::set_dia_chi(const string& b) {
	dia_chi = b;
}
bool cNhaPho::get_loai_nha() {
	return loai_nha_caocap;
}
string cNhaPho::get_dia_chi() {
	return dia_chi;
}
void cNhaPho::set_thanhtien(const double& b) {
	thanhtien = b;
}
double cNhaPho::get_thanhtien() {
	return thanhtien;
}

//nhom ham xu li
void cNhaPho::Nhap() {
	cGiaoDich::Nhap();
	cout << "Nhap loai nha ('1'->cao cap; '0'->thuong'): ";
	cin >> loai_nha_caocap;
	cout << "Nhap dia chi: ";
	cin.ignore();
	getline(cin, dia_chi);
	if (loai_nha_caocap == 1) thanhtien = dien_tich * dongia;
	else thanhtien = dien_tich * dongia * 0.9;

	return;

}
void cNhaPho::Xuat() {
	cGiaoDich::Xuat();
	cout << "\nLoai nha: ";
	if (loai_nha_caocap == 0) cout << "thuong";
	else cout << "cao cap";
	cout << "\nDia chi: " << dia_chi;
	cout << "\nThanh tien: " << thanhtien;

	return;
}