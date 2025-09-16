//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1
#include "cSinhVien.h"

using namespace std;

//nhom ham khoi tao
cSinhVien::cSinhVien(string a, string b, string c, unsigned short d, float e) :mssv(a), hoten(b), diachi(c), tong_tinchi(d), diem_trungbinh(e) {}

//nhom ham set get 
void cSinhVien::set_mssv(const string& a) {
	mssv = a;
}
void cSinhVien::set_hoten(const string& b) {
	hoten = b;
}
void cSinhVien::set_diachi(const string& c) {
	diachi = c;
}
void cSinhVien::set_tong_tinchi(const unsigned short& d) {
	tong_tinchi = d;
}
void cSinhVien::set_diem_trungbinh(const float& e) {
	diem_trungbinh = e;
}

string cSinhVien::get_mssv() {
	return mssv;
}
string cSinhVien::get_hoten() {
	return hoten;
}
string cSinhVien::get_diachi() {
	return diachi;
}
unsigned short cSinhVien::get_tong_tinchi() {
	return tong_tinchi;
}
float cSinhVien::get_diem_trungbinh() {
	return diem_trungbinh;
}

//nhom ham xu ly
void cSinhVien::Nhap() {
	cout << "\nNhap ma so sinh vien: ";
	cin.ignore();
	getline(cin, mssv);
	cout << "Nhap ho ten sinh vien: ";
	getline(cin, hoten);
	cout << "Nhap dia chi noi o: ";
	getline(cin, diachi);
	cout << "Nhap tong so tin chi: ";
	cin >> tong_tinchi;
	cout << "Nhap diem trung binh: ";
	cin >> diem_trungbinh;

	return;
}
void cSinhVien::Xuat() {
	cout << "\nMa so sinh vien: " << mssv;
	cout << "\nHo ten sinh vien: " << hoten;
	cout << "\nDia chi noi o: " << diachi;
	cout << "\nTong so tin chi: " << tong_tinchi;
	cout << "\nDiem trung binh: " << diem_trungbinh;

	return;
}