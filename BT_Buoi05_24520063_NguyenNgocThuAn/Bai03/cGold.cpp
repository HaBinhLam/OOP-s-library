//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cGold.h"
using namespace std;


cGold::cGold(string a, unsigned long long b) :loaivang(a), thanhtien(b) {}

//nhom ham set get
void cGold::set_loaivang(const string& a) {
	loaivang = a;
}
void cGold::set_thanhtien(const unsigned long long& b) {
	thanhtien = b;
}

string cGold::get_loaivang() {
	return loaivang;
}
unsigned long long cGold::get_thanhtien() {
	return thanhtien;
}

//nhom ham xu ly

void cGold::Nhap() {
	cGiaoDich::Nhap();
	cout << "Nhap loai vang: ";
	cin.ignore();
	getline(cin, loaivang);
	thanhtien = soluong * dongia;

	return;
}
void cGold::Xuat() {
	cGiaoDich::Xuat();
	cout << "\nLoai vang: " << loaivang;
	cout << "\nThanh tien: " << thanhtien;

	return;
}