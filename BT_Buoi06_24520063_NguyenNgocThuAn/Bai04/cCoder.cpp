//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cCoder.h"

using namespace std;


//nhom ham khoi tao
cCoder::cCoder(std::string a, std::string b, unsigned short c, std::string d, std::string e, unsigned long long f, unsigned long long g, bool h, unsigned short i) :cEmployee(a, b, c, d, e, f, g, h), sogio_overtime(i) {}

//nhom ham set get
void cCoder::set_sogio_overtime(const unsigned short& i) { sogio_overtime = i; }
unsigned short cCoder::get_sogio_overtime() { return sogio_overtime; }


//nhom ham xu li
void cCoder::Nhap() {
	cEmployee::Nhap();
	cout << "Nhap so gio lam viec them: ";
	cin >> sogio_overtime;
	tinhtienluong();

	return;
}
void cCoder::Xuat() {
	cEmployee::Xuat();
	cout << "\nSo gio lam viec them: " << sogio_overtime;
	cout << "\nTien luong: " << luong;

	return;
}
void cCoder::tinhtienluong() {
	luong = luong_coban + sogio_overtime * 200000;
	return;
}