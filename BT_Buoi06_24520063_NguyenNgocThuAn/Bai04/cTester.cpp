//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cTester.h"
using namespace std;


//nhom ham khoi tao
cTester::cTester(std::string a, std::string b, unsigned short c, std::string d, std::string e, unsigned long long f, unsigned long long g, bool h, unsigned short i) :cEmployee(a, b, c, d, e, f, g, h), loi_phathien(i) {}

//nhom ham set get
void cTester::set_loi_phathien(const unsigned short& a) { loi_phathien = a; }
unsigned cTester::get_loi_phathien() { return loi_phathien; }

//nhom ham xu li
void cTester::Nhap() {
	cEmployee::Nhap();
	cout << "Nhap so loi phat hien: ";
	cin >> loi_phathien;
	tinhtienluong();

	return;
}
void cTester::Xuat() {
	cEmployee::Xuat();
	cout << "\nSo loi phat hien: " << loi_phathien;
	cout << "\nLuong: " << luong;

	return;
}
void cTester::tinhtienluong() {
	luong = luong_coban + loi_phathien * 50000;
	return;
}
