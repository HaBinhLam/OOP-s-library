//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cChuyenXe.h"
#include <string>
using namespace std;

cChuyenXe::cChuyenXe(string a, string b, string c, unsigned long long d) :maso_chuyen(a), hoten_taixe(b), soxe(c), doanhthu(d) {}

//nhom ham set get
void cChuyenXe::set_maso_chuyen(const string& a) {
	maso_chuyen = a;
}
void cChuyenXe::set_hoten_taixe(const std::string& b) {
	hoten_taixe = b;
}
void cChuyenXe::set_soxe(const std::string& c) {
	soxe = c;
}
void cChuyenXe::set_doanhthu(const unsigned long long& d) {
	doanhthu = d;
}

string cChuyenXe::get_maso_chuyen() {
	return maso_chuyen;
}
string cChuyenXe::get_hoten_taixe() {
	return hoten_taixe;
}
string cChuyenXe::get_soxe() {
	return soxe;
}
unsigned long long cChuyenXe::get_doanhthu() {
	return doanhthu;
}

//nhom ham xu ly
 void cChuyenXe::Nhap() {
	cin.ignore();
	cout << "\nNhap ma so chuyen: ";
	getline(cin, maso_chuyen);
	cout << "Nhap ho ten tai xe: ";
	getline(cin, hoten_taixe);
	cout << "Nhap bien so xe: ";
	getline(cin, soxe);
	cout << "Nhap doanh thu: ";
	cin >> doanhthu;

	return;
}
 void cChuyenXe::Xuat() {
	cout << "\nMa so chuyen: " << maso_chuyen;
	cout << "\nHo ten tai xe: " << hoten_taixe;
	cout << "\nSo xe: " << soxe;
	cout << "\nDoanh thu: " << doanhthu;

	return;
}