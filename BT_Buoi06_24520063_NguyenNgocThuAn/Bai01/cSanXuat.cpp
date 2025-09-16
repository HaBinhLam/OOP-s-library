//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cSanXuat.h"

using namespace std;

//nhom ham khoi tao
cSanXuat::cSanXuat(std::string a, cDate b, unsigned long long c, unsigned int  d, bool type, unsigned long long e) :cNhanVien(a, b, c, type), product(d), base_salary(e) {}

//nhom ham set get
void cSanXuat::set_product(const unsigned int& a) {
	product = a;
}

void cSanXuat::set_base_salary(const unsigned long long& a) {
	base_salary = a;
}

unsigned int cSanXuat::get_product() {
	return product;
}

unsigned long long cSanXuat::get_base_salary() {
	return base_salary;
}



//nhom xu li
void cSanXuat::Nhap() {
	cNhanVien::Nhap();
	cout << "Nhap so luong san pham: ";
	cin >> product;
	cout << "Nhap luong can ban: ";
	cin >> base_salary;

	calculate_salary();

}

void cSanXuat::calculate_salary() {
	salary = base_salary + product * 5000;
	return;
}

void cSanXuat::Xuat() {
	cNhanVien::Xuat();
	cout << "\nSo luong san pham: " << product;
	cout << "\nLuong can ban: " << base_salary;
	cout << "\nLuong: " << salary;

	return;
}

