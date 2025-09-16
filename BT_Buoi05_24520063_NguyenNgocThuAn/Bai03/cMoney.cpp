//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cMoney.h"
using namespace std;
//nhom ham khoi tao

cMoney::cMoney(float a, int b, unsigned long long c) :ti_gia(a), loai_tiente(b), thanhtien(c) {}

//nhom ham set get
void cMoney::set_tigia(const float& a) {
	ti_gia = a;
}
void cMoney::set_loaitiente(const int& b) {
	loai_tiente = b;
}
void cMoney::set_thanhtien(const unsigned long long& c) {
	thanhtien = c;
}
float  cMoney::get_tigia() {
	return ti_gia;
}
int cMoney::get_loaitiente() {
	return loai_tiente;
}
unsigned long long cMoney::get_thanhtien() {
	return thanhtien;
}
//nhom ham xu li
void cMoney::Nhap() {
	cGiaoDich::Nhap();
	cout << "Nhap ti gia: ";
	cin >> ti_gia;
	cout << "Nhap loai tien (0:VND _ 1:USD _ -1:EURO): ";
	cin >> loai_tiente;
	if (loai_tiente == 0) {
		thanhtien = soluong * dongia;
	}
	else {
		thanhtien = soluong * dongia * ti_gia;
	}

	return;
}
void cMoney::Xuat() {
	cGiaoDich::Xuat();
	cout << "\nTi gia: " << ti_gia;
	cout << "\nLoai tien te: ";
	if (loai_tiente == 0) cout << "VND";
	else if (loai_tiente == 1) cout << "USD";
	else cout << "EURO";
	cout << "\nThanh tien: " << thanhtien;

	return;
}
