//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cNhanVien.h"

using namespace std;

	//nhom ham khoi tao
cNhanVien::cNhanVien(std::string a, cDate b, unsigned long long c, bool type) :name(a), birthday(b), salary(c), vanphong(type) {}
	//nhom ham set get
void cNhanVien::set_name(const std::string& a) {
	name = a;
	}
void cNhanVien::set_birthday(const cDate& b) {
	birthday = b;
	}
void cNhanVien::set_salary(const unsigned long long& c) {
	salary = c;
}
void cNhanVien::set_vanphong(const bool& a) {
	vanphong = a;
}

std::string cNhanVien::get_name() {
	return name;
	}
cDate cNhanVien::get_birthday() {
	return birthday;
	}
unsigned long long cNhanVien::get_salary() {
	return salary;
}
bool cNhanVien::get_vanphong() {
	return vanphong;
}
	
	//nhom ham xu ly
void cNhanVien::Nhap() {
	cout << "\nNhap ho ten: ";
	cin.ignore();
	getline(cin, name);
	cout << "Nhap sinh nhat:\n";
	cin >> birthday;
	

}
void cNhanVien::Xuat() {
	cout << "\nHo ten: " << name;
	cout << "\nSinh nhat: " << birthday;

	return;
}



