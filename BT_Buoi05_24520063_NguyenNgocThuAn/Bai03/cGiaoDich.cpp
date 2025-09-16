//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cGiaoDich.h"

using namespace std;


//nhom ham khoi tao
cGiaoDich::cGiaoDich(string a, cDate d, unsigned long long b, unsigned int c) :ma_giaodich(a), ngay_giaodich(d), dongia(b), soluong(c) {}

//nhom ham set get
void cGiaoDich::set_ma_giaodich(const string& a) {
	ma_giaodich = a;
}
void cGiaoDich::set_dongia(const unsigned long long& b) {
	dongia = b;
}
void cGiaoDich::set_soluong(const unsigned int& c) {
	soluong = c;
}
void cGiaoDich::set_ngay_giaodich(const cDate& d) {
	ngay_giaodich = d;
}

string cGiaoDich::get_ma_giaodich() {
	return ma_giaodich;
}
unsigned long long cGiaoDich::get_dongia() {
	return dongia;
}
unsigned int cGiaoDich::get_soluong() {
	return soluong;
}
cDate cGiaoDich::get_ngay_giaodich() {
	return ngay_giaodich;
}
//nhom ham xu li
void cGiaoDich::Nhap() {
	cout << "\nNhap ma giao dich: ";
	cin.ignore();
	getline(cin, ma_giaodich);

	cout << "Nhap ngay giao dich :\n";
	cin >> ngay_giaodich;

	cout << "Nhap don gia: ";
	cin >> dongia;

	cout << "Nhap so luong: ";
	cin >> soluong;

	return;
}
void cGiaoDich::Xuat() {
	cout << "\nMa giao dich: " << ma_giaodich;
	cout << "\nNgay giao dich: " << ngay_giaodich;
	cout << "\nDon gia: " << dongia;
	cout << "\nSo luong: " << soluong;

	return;
}
