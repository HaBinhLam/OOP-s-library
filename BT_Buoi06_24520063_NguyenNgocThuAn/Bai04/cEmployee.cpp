//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cEmployee.h"

using namespace std;


//nhom ham khoi tao
cEmployee::cEmployee(std::string a, std::string b, unsigned short c, std::string d, std::string e, unsigned long long f, unsigned long long g, bool h) :ma_nhanvien(a), hoten(b), tuoi(c), sdt(d), email(e), luong_coban(f), luong(g), coder(h) {}

//nhom ham set get
void cEmployee::set_ma_nhanvien(const std::string& a) { ma_nhanvien = a; }
void cEmployee::set_hoten(const std::string& b) { hoten = b; }
void cEmployee::set_tuoi(const unsigned short& c) { tuoi = c; }
void cEmployee::set_sdt(const std::string& d) { sdt = d; }
void cEmployee::set_email(const std::string& e) { email = e; }
void cEmployee::set_luong_coban(const unsigned long long& f) { luong_coban = f; }
void cEmployee::set_luong(const unsigned long long& g) { luong = g; }
void cEmployee::set_coder(const bool& h) { coder = h; }

std::string cEmployee::get_ma_nhanvien() { return ma_nhanvien; }
std::string cEmployee::get_hoten() { return hoten; }
unsigned short cEmployee::get_tuoi() { return tuoi; }
std::string cEmployee::get_sdt() { return sdt; }
std::string cEmployee::get_email() { return email; }
unsigned long long cEmployee::get_luong_coban() { return luong_coban; }
unsigned long long cEmployee::get_luong() { return luong; }
bool cEmployee::get_coder() { return coder; }


//nhom ham xu li
void cEmployee::Nhap() {
	cout << "\nNhap ma nhan vien: ";
	cin.ignore();
	getline(cin, ma_nhanvien);
	cout << "Nhap ho ten nhan vien: ";
	getline(cin, hoten);
	cout << "Nhap tuoi: ";
	cin >> tuoi;
	cout << "Nhap so dien thoai: ";
	cin.ignore();
	getline(cin, sdt);
	cout << "Nhap email: ";
	getline(cin, email);
	cout << "Nhap luong co ban: ";
	cin >> luong_coban;

	return;
}
void cEmployee::Xuat() {
	cout << "\nMa nhan vien: " << ma_nhanvien;
	cout << "\nHo ten nhan vien: " << hoten;
	cout << "\nTuoi: " << tuoi;
	cout << "\nSo dien thoai: " << sdt;
	cout << "\nEmail: " << email;
	cout << "\nLuong co ban: " << luong_coban;

	return;
}
