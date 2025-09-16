#include "cKhachHang.h"
using namespace std;
//nhom ham khoi tao
cKhachHang::cKhachHang(string a, string b, string c, float d, float e, unsigned long long f, cDate g, bool h) :ma_khachhang(a), ten_khachhang(b), dia_chi(c), chiso_donghodien_old(d), chiso_donghodien_new(e), sotien_thanhtoan(f), ngay_phathanh_hoadon(g), doanh_nghiep(h) {}



//nhom ham set get
void cKhachHang::set_ma_khachhang(const string& a) {
	ma_khachhang = a;
}
void cKhachHang::set_ten_khachhang(const string& b) {
	ten_khachhang = b;
}
void cKhachHang::set_dia_chi(const string& c) {
	dia_chi = c;
}
void cKhachHang::set_chiso_donghodien_old(const float& d) {
	chiso_donghodien_old = d;
}
void cKhachHang::set_chiso_donghodien_new(const float& e) {
	chiso_donghodien_new = e;
}
void cKhachHang::set_sotien_thanhtoan(const unsigned long long& f) {
	sotien_thanhtoan = f;
}
void cKhachHang::set_ngay_phathanh_hoadon(const cDate& g) {
	ngay_phathanh_hoadon = g;
}
void cKhachHang::set_doanhnghiep(const bool& h) {
	doanh_nghiep = h;
}

string cKhachHang::get_ma_khachhang() {
	return ma_khachhang;
}
string cKhachHang::get_ten_khachhang() {
	return ten_khachhang;
}
string cKhachHang::get_dia_chi() {
	return dia_chi;
}
float cKhachHang::get_chiso_donghodien_old() {
	return chiso_donghodien_old;
}
float cKhachHang::get_chiso_donghodien_new() {
	return chiso_donghodien_new;
}
unsigned long long cKhachHang::get_sotien_thanhtoan() {
	return sotien_thanhtoan;
}
cDate cKhachHang::get_ngay_phathanh_hoadon() {
	return ngay_phathanh_hoadon;
}
bool cKhachHang::get_doanhnghiep() {
	return doanh_nghiep;
}

//nhom ham xu li
void cKhachHang::Nhap() {

	cout << "Nhap ma khach hang: ";
	cin.ignore();
	getline(cin, ma_khachhang);
	cout << "Nhap ten khach hang: ";
	getline(cin, ten_khachhang);
	cout << "Nhap dia chi: ";
	getline(cin, dia_chi);
	cout << "Nhap chi so dong ho dien truoc day (cu): ";
	cin >> chiso_donghodien_old;
	cout << "Nhap chi so dong ho dien hien tai (moi): ";
	cin >> chiso_donghodien_new;
	cout << "Nhap ngay phat hanh hoa don:\n";
	cin >> ngay_phathanh_hoadon;

	return;

}
void cKhachHang::Xuat() {
	cout << "\nMa khach hang: " << ma_khachhang;
	cout << "\nTen khach hang: " << ten_khachhang;
	cout << "\nDia chi: " << dia_chi;
	cout << "\nChi so dong ho dien truoc day (cu): " << chiso_donghodien_old;
	cout << "\nChi so dong ho dien hien tai (moi): " << chiso_donghodien_new;
	cout << "\nNgay phat hanh hoa don: " << ngay_phathanh_hoadon;
	cout << "\nSo tien can thanh toan: " << sotien_thanhtoan;

	return;
}