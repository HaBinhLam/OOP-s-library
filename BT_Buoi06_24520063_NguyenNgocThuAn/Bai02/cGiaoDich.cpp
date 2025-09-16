//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cGiaoDich.h"

using namespace std;


//nhom ham khoi tao
cGiaoDich::cGiaoDich(std::string a, Date b, unsigned long long c, unsigned short d, unsigned long long e, double f) :ma_giaodich(a), ngay_giaodich(b), don_gia(c), type(d), thanh_tien(e), dientich(f) {}

//nhom ham set get
void cGiaoDich::set_ma_giaodich(const std::string& a) {
	ma_giaodich = a;
}
void cGiaoDich::set_ngay_giaodich(const Date& b) {
	ngay_giaodich = b;
}
void cGiaoDich::set_don_gia(const unsigned long long& c) {
	don_gia = c;
}
void cGiaoDich::set_type(const unsigned short& d) {
	type = d;
}
void cGiaoDich::set_dientich(const double& e) {
	dientich = e;
}
void cGiaoDich::set_thanh_tien(const unsigned long long& f) {
	thanh_tien = f;
}

std::string cGiaoDich::get_ma_giaodich() {
	return ma_giaodich;
}
Date cGiaoDich::get_ngay_giaodich() {
	return ngay_giaodich;
}
unsigned long long cGiaoDich::get_don_gia() {
	return don_gia;
}
unsigned short cGiaoDich::get_type() {
	return type;
}
double cGiaoDich::get_dientich() {
	return dientich;
}
unsigned long long cGiaoDich::get_thanh_tien() {
	return thanh_tien;
}

//nhom ham xu ly
void cGiaoDich::Nhap() {
	cout << "\nNhap ma giao dich: ";
	cin.ignore();
	getline(cin, ma_giaodich);
	cout << "Nhap ngay giao dich: ";
	cin >> ngay_giaodich;
	cout << "Nhap don gia: ";
	cin >> don_gia;
	cout << "Nhap dien tich: ";
	cin >> dientich;

	return;
	
}
void cGiaoDich::Xuat() {
	cout << "\nMa giao dich: " << ma_giaodich;
	cout << "\nNgay giao dich: " << ngay_giaodich;
	cout << "\nDon gia: " << don_gia;
	cout << "\nDien tich: " << dientich;

	return;

}