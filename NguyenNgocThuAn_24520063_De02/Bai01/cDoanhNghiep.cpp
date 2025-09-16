#include "cDoanhNghiep.h"
using namespace std;


	//nhom ham khoi tao
cDoanhNghiep::cDoanhNghiep(string a, string b, string c, float d, float e, unsigned long long f, cDate g, bool h, unsigned int i) :cKhachHang(a, b, c, d, e, f, g, h), linhvuc_kinhdoanh(i) {}


	//nhom ham set get
void cDoanhNghiep::set_linhvuc_kinhdoanh(const  unsigned int& a) {
	linhvuc_kinhdoanh = a;
	}
unsigned int cDoanhNghiep::get_linhvuc_kinhdoanh() {
	return linhvuc_kinhdoanh;
	}


	//nhom ham xu li
void cDoanhNghiep::Nhap() {
	cKhachHang::Nhap();
	cout << "Nhap '0' neu doanh nghiep la NHA HANG KHACH SAN\n";
	cout << "Nhap '1' neu doanh nghiep la CONG TY TU NHAN\n";
	cout << "Nhap '2' neu doanh nghiep la CONG TY NHA NUOC\n";
	cout << "Nhap: ";
	cin >> linhvuc_kinhdoanh;
	tinh_tien_thanhtoan();

	return;
	}
void cDoanhNghiep::Xuat() {
	cKhachHang::Xuat();
	cout << "\nLinh vuc kinh doanh: ";
	if (linhvuc_kinhdoanh == 0) {
		cout << "NHA HANG KHACH SAN";
	}
	else if (linhvuc_kinhdoanh == 1) {
		cout << "CONG TY TU NHAN";
	}
	else {
		cout << "CONG TY NHA NUOC";
	}
	
	return;
	}

	unsigned long long cDoanhNghiep::tinh_tien_dien() {
		unsigned long long tien_dien = 0;
		tien_dien = (chiso_donghodien_new - chiso_donghodien_old) * 3600;
		return tien_dien;
	}
	void cDoanhNghiep::tinh_tien_thanhtoan() {
		unsigned long long tiendien = tinh_tien_dien();
		sotien_thanhtoan = tiendien + 0.1 * tiendien;
		if (linhvuc_kinhdoanh == 2) {
			sotien_thanhtoan -= 0.05 * tiendien;
		}

		return;
	}