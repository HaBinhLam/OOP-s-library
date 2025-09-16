//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cSinhVien.h"
using namespace std;

//nhom ham khoi tao
cSinhVien::cSinhVien(std::string a, std::string b, std::string c, unsigned short d, float e, bool f) :mssv(a), hoten(b), diachi(c), tong_tinchi(d), diemtrungbinh(e), daihoc(f) {}

//nhom ham set get
void cSinhVien::set_mssv(const std::string& a) {
	mssv = a;
}
void cSinhVien::set_hoten(const std::string& b) {
	hoten = b;
}
void cSinhVien::set_diachi(const std::string& c) {
	diachi = c;
}
void cSinhVien::set_tong_tinchi(const unsigned short& d) {
	tong_tinchi = d;
}
void cSinhVien::set_diemtrungbinh(const float& e) {
	diemtrungbinh = e;
}
void cSinhVien::set_daihoc(const bool& f) {
	daihoc = f;
}

std::string cSinhVien::get_mssv() {
	return mssv;
}
std::string cSinhVien::get_hoten() {
	return hoten;
}
std::string cSinhVien::get_diachi() {
	return diachi;
}
unsigned short cSinhVien::get_tong_tinchi() {
	return tong_tinchi;
}
float cSinhVien::get_diemtrungbinh() {
	return diemtrungbinh;
}
bool cSinhVien::get_daihoc() {
	return daihoc;
}

//nhom ham xu li
void cSinhVien::Nhap() {
	cout << "\nNhap ma so sinh vien: ";
	cin.ignore();
	getline(cin, mssv);
	cout << "Nhap ho ten sinh vien: ";
	getline(cin, hoten);
	cout << "Nhap dia chi: ";
	getline(cin, diachi);
	cout << "Nhap tong so tin chi: ";
	cin >> tong_tinchi;
	cout << "Nhap diem trung binh: ";
	cin >> diemtrungbinh;

	return;
}
void cSinhVien::Xuat() {
	cout << "\nMa so sinh vien: " << mssv;
	cout << "\nHo ten sinh vien: " << hoten;
	cout << "\nDia chi: " << diachi;
	cout << "\nTong so tin chi: " << tong_tinchi;
	cout << "\nDiem trung binh: " << diemtrungbinh;

	return;
}