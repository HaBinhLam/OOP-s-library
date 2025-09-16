//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cKhachHang.h"

using namespace std;

//nhom ham khoi tao
cKhachHang::cKhachHang(std::string a, unsigned int b, double c):name(a), soluong_hang(b), dongia_hang(c){}

//nhom ham set get
void cKhachHang::set_name(const std::string& a) {
	name = a;
}
void cKhachHang::set_soluong_hang(const unsigned int& b) {
	soluong_hang = b;
}
void cKhachHang::set_dongia_hang(const double& c) {
	dongia_hang = c;
}

std::string cKhachHang::get_name() {
	return name;
}
unsigned int cKhachHang::get_soluong_hang() {
	return soluong_hang;
}
double cKhachHang::get_dongia_hang() {
	return dongia_hang;
}

//nhom ham xu li
void cKhachHang::Nhap() {
	cout << "\nNhap ten khach hang: ";
	cin.ignore();
	getline(cin, name);
	cout << "Nhap so luong hang: ";
	cin >> soluong_hang;
	cout << "Nhap don gia hang: ";
	cin >> dongia_hang;
	
	return;
 }
void cKhachHang::Xuat() {
	cout << "\nTen khach hang: " << name;
	
	return;
 }


