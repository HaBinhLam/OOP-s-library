//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1
#include "cNVSanXuat.h"
using namespace std;

//nhom ham khoi tao
cNVSanXuat::cNVSanXuat(unsigned long long a, unsigned int b, unsigned long long c):salary_basic(a), amount_product(b), salary(c) {}

//nhom ham set get
void cNVSanXuat::set_salary_basic(const unsigned long long& a) {
	salary_basic = a;
}
unsigned long long cNVSanXuat::get_salary_basic() {
	return salary_basic;
}
void cNVSanXuat::set_amount_product(const unsigned int& b) {
	amount_product = b;
}
unsigned int cNVSanXuat::get_amount_product() {
	return amount_product;
}
void cNVSanXuat::set_salary(const unsigned long long& c) {
	salary = c;
}
unsigned long long cNVSanXuat::get_salary() {
	return salary;
}

//nhom ham xu ly
void cNVSanXuat::Nhap() {
	cNhanVien::Nhap();
	cout << "Nhap luong co ban: ";
	cin >> salary_basic;
	cout << "Nhap so luong san pham: ";
	cin >> amount_product;
	salary = salary_basic + amount_product * 5000;

	return;
}
void cNVSanXuat::Xuat() {
	cNhanVien::Xuat();
	cout << "\nLuong co ban: " << salary_basic;
	cout << "\nSo luong san pham: " << amount_product;
	cout << "\nLuong: " << salary;

	return;
}
