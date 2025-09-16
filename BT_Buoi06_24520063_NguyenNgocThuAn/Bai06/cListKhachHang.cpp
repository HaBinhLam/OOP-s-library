//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cListKhachHang.h"

using namespace std;


//nhom ham khoi tao
cListKhachHang::cListKhachHang(int a) {
	danhsach.resize(a);
}

//nhom ham xu li
void cListKhachHang::nhap_danhsach(int x, int y, int z) {
	for (int i = 0; i < x; i++) {
		cKhachHang* khachhang = new cKhachA();
		khachhang->Nhap();
		danhsach.push_back(khachhang);
	}
	for (int i = 0; i < y; i++) {
		cKhachHang* khachhang = new cKhachB();
		khachhang->Nhap();
		danhsach.push_back(khachhang);
	}
	for (int i = 0; i < z; i++) {
		cKhachHang* khachhang = new cKhachC();
		khachhang->Nhap();
		danhsach.push_back(khachhang);
	}

	

}
void cListKhachHang::xuat_danhsach(int x, int y, int z) {
	cout << x << " " << y << " " << z <<endl;
	for (cKhachHang* khachhang : danhsach) {
		khachhang->Xuat();
		cout << endl;
	}
	cout << "\nTong so tien cong ty thu duoc: " << tinh_tong_tien_thu_duoc();
	
}
double cListKhachHang::tinh_tong_tien_thu_duoc() {
	double tongtien = 0;
	for (cKhachHang* khachhang : danhsach) {
		tongtien += khachhang->tinh_tien_phai_tra();
	}
	return tongtien;
}