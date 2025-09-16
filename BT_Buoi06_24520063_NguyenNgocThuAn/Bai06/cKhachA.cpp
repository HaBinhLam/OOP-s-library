//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cKhachA.h"
using namespace std;

cKhachA::cKhachA(std::string a, unsigned int b, double c) :cKhachHang(a, b, c) {}

void cKhachA::Nhap() {
	cKhachHang::Nhap();
}
void cKhachA::Xuat() {
	cKhachHang::Xuat();
	cout << "\nSo tien phai tra: " << tinh_tien_phai_tra();

	return;
}
double cKhachA::tinh_tien_phai_tra() {
	return(soluong_hang * dongia_hang + (0.1 * soluong_hang * dongia_hang));
}
