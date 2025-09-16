//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cKhachB.h"

using namespace std;

//nhom ham khoi tao
cKhachB::cKhachB(std::string a, unsigned int b, double c, unsigned int d) :cKhachHang(a, b, c), sonam_thanthiet(d) {}

//nhom ham set get
void cKhachB::set_sonam_thanthiet(const unsigned int& a) {
	sonam_thanthiet = a;
}
unsigned int cKhachB::get_sonam_thanthiet() {
	return sonam_thanthiet;
}
//nhom ham xu li
void cKhachB::Nhap() {
	cKhachHang::Nhap();
	cout << "Nhap so nam than thiet: ";
	cin >> sonam_thanthiet;

	return;
}
void cKhachB::Xuat() {
	cKhachHang::Xuat();
	cout << "\nSo tien phai tra: " << tinh_tien_phai_tra();

	return;
}
double cKhachB::tinh_tien_phai_tra() {
	double khuyenmai = max(sonam_thanthiet * 0.05, 0.5);
	return(soluong_hang * dongia_hang) * (1 - khuyenmai) + 0.1 * (soluong_hang * dongia_hang) * (1 - khuyenmai);
}