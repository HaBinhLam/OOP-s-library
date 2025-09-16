//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1
#include "cNVVanPhong.h"

using namespace std;

//nhom ham khoi tao
cNVVanPhong::cNVVanPhong(unsigned int a, unsigned long long b) :working_day(a), salary(b) {}

//nhom ham set get
void cNVVanPhong::set_working_day(const unsigned int& a) {
	working_day = a;
}
void cNVVanPhong::set_salary(const unsigned long long& b) {
	salary = b;
}

unsigned int cNVVanPhong::get_working_day() {
	return working_day;
}
unsigned long long cNVVanPhong::get_salary() {
	return salary;
}

//nhom ham xu ly
void cNVVanPhong::Nhap() {
	cNhanVien::Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> working_day;
	salary = 100000 * working_day;

	return;
}
void cNVVanPhong::Xuat() {
	cNhanVien::Xuat();
	cout << "\nSo ngay lam viec: " << working_day;
	cout << "\nLuong: " << salary;

	return;
}

