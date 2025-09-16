//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cKhachC.h"
using namespace std;


//nhom ham khoi tao
cKhachC::cKhachC(std::string a, unsigned int b, double c) :cKhachHang(a, b, c) {}

//nhom ham xu li
void cKhachC::Nhap() {
	cKhachHang::Nhap();

}
void cKhachC::Xuat() {
	cKhachHang::Xuat();
	cout << "\nSo tien phai tra: " << tinh_tien_phai_tra();
}
double cKhachC::tinh_tien_phai_tra() {
	return (soluong_hang * dongia_hang * 0.5) + (soluong_hang * dongia_hang * 0.5) * 0.1;
}

