//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cDaiHoc.h"

using namespace std;

//nhom ham khoi tao
cDaiHoc::cDaiHoc(std::string a, std::string b, std::string c, unsigned short d, float e, bool f, std::string g, float h) :cSinhVien(a, b, c, d, e, f), ten_luanvan(g), diem_luanvan(h) {}

//nhom ham set get
void cDaiHoc::set_ten_luanvan(const std::string& a) {
	ten_luanvan = a;
}
void cDaiHoc::set_diem_luanvan(const float& b) {
	diem_luanvan = b;
}

std::string cDaiHoc::get_ten_luanvan() {
	return ten_luanvan;
}
float cDaiHoc::get_diem_luanvan() {
	return diem_luanvan;
}

//nhom ham xu ly
void cDaiHoc::Nhap() {
	cSinhVien::Nhap();
	cout << "Nhap ten luan van: ";
	cin.ignore();
	getline(cin, ten_luanvan);
	cout << "Nhap diem luan van: ";
	cin >> diem_luanvan;

	return;
}
void cDaiHoc::Xuat() {
	cSinhVien::Xuat();
	cout << "\nTen luan van: " << ten_luanvan;
	cout << "\nDiem luan van: " << diem_luanvan;

	return;
}
bool cDaiHoc::xettotnghiep() {
	if (tong_tinchi >= 170 && diemtrungbinh >= 5 && diem_luanvan >= 5) {
		return 1;
	}
	return 0;
}
