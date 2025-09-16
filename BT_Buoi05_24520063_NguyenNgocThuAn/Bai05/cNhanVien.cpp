//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1
#include "cNhanVien.h"
using  namespace std;

//nhom ham khoi tao
cNhanVien::cNhanVien(string a, cDate b) :name(a), birthday(b) {}

//nhom ham set get
void cNhanVien::set_name(const string& a) {
	name = a;
}
void cNhanVien::set_birthday(const cDate& b) {
	birthday = b;
}

string cNhanVien::get_name() {
	return name;
}
cDate cNhanVien::get_birthday() {
	return birthday;
}

//nhom ham xu ly
void cNhanVien::Nhap() {
	cin.ignore();
	cout << "\nNhap ho ten nhan vien: ";
	getline(cin, name);
	cout << "Nhap ngay sinh nhan vien:\n";
	cin >> birthday;

	return;
}
void cNhanVien::Xuat() {
	cout << "\nHo ten nhan vien: " << name;
	cout << "\nNgay sinh nhan vien: " << birthday;

	return;
}

