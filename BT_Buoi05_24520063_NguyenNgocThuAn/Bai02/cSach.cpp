//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cSach.h"

using namespace std;

//nhom ham khoi tao
cSach::cSach(string a, cDate b, unsigned long long c, int d, string e):masach(a), ngay_nhap(b), don_gia(c), so_luong(d),NXB(e){}

//nhom ham set get
void cSach::set_masach(const string& a) {
	masach = a;
}
void cSach::set_ngay_nhap(const cDate& b) {
	ngay_nhap = b;
}
void cSach::set_don_gia(const unsigned long long& c) {
	don_gia = c;
}
void cSach::set_soluong(const int& d) {
	so_luong = d;
}
void cSach::set_NXB(const std::string& e) {
	NXB = e;
}

string cSach::get_masach() {
	return masach;
}
cDate cSach::get_ngay_nhap() {
	return ngay_nhap;
}
unsigned long long cSach::get_don_gia() {
	return don_gia;
}
int cSach::get_soluong() {
	return so_luong;
}
string cSach::get_NXB() {
	return NXB;
}

//nhom ham xu ly
void cSach::Nhap() {
	cin.ignore();
	cout << "\nNhap ma sach: ";
	getline(cin, masach);
	cout << "Ngay nhap sach:\n";
	cin >> ngay_nhap;
	cout << "Nhap don gia: ";
	cin >> don_gia;
	cout << "Nhap so luong: ";
	cin >> so_luong;
	cout << "Nhap nha xuat ban: ";
	cin.ignore();
	getline(cin, NXB);

	return;
}
void cSach::Xuat() {
	cout << "\nMa sach: " << masach;
	cout << "\nNgay nhap sach: " << ngay_nhap;
	cout << "\nDon gia: " << don_gia <<" dong";
	cout << "\nSo luong: " << so_luong;
	cout << "\nNha xuat ban: " << NXB;

	return;
}
