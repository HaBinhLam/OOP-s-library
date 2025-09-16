//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cGiaoDich.h"
using namespace std;

cGiaoDich::cGiaoDich(string a, cDate b, unsigned long long c, double e) :ma_giaodich(a), ngay_giaodich(b), dongia(c), dien_tich(e) {}

//nhom ham set get
void cGiaoDich::set_ma_giaodich(const string& a) {
	ma_giaodich = a;
}
void cGiaoDich::set_ngay_giaodich(const cDate& b) {
	ngay_giaodich = b;
}
void cGiaoDich::set_dongia(const unsigned long long& c) {
	dongia = c;
}
void cGiaoDich::set_dientich(const double& e) {
	dien_tich = e;
}

string cGiaoDich::get_ma_giaodich() {
	return ma_giaodich;
}
cDate cGiaoDich::get_ngay_giaodich() {
	return ngay_giaodich;
}
unsigned long long cGiaoDich::get_dongia() {
	return dongia;
}
double cGiaoDich::get_dientich() {
	return dien_tich;
}

//nhom ham xu ly
void cGiaoDich::Nhap() {
	cin.ignore();
	cout << "\nNhap ma giao dich: ";
	getline(cin, ma_giaodich);
	cout << "Nhap ngay giao dich:\n";
	cin >> ngay_giaodich;
	cout << "Nhap don gia (dong): ";
	cin >> dongia;
	cout << "Nhap dien tich (met vuong): ";
	cin >> dien_tich;

	return;
}
void cGiaoDich::Xuat() {
	cout << "\nMa giao dich: " << ma_giaodich;
	cout << "\nNgay giao dich: " << ngay_giaodich;
	cout << "\nDon gia: " << dongia;
	cout << "\nDien tich: " << dien_tich;

	return;
}

