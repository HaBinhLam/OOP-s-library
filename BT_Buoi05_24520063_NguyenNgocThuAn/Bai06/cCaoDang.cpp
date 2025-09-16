//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1
#include "cCaoDang.h"

using namespace std;

//nhom ham khoi tao
cCaoDang::cCaoDang(float a) :diem_totnghiep(a) {}

//nhom ham set get
void cCaoDang::set_diem_totnghiep(const float& a) {
	diem_totnghiep = a;
}
float cCaoDang::get_diem_totnghiep() {
	return diem_totnghiep;
}

//nhom ham xu li
void cCaoDang::Nhap() {
	cSinhVien::Nhap();
	cout << "Nhap diem thi tot nghiep: ";
	cin >> diem_totnghiep;

	return;
}
void cCaoDang::Xuat() {
	cSinhVien::Xuat();
	cout << "\nDiem thi tot nghiep: " << diem_totnghiep;

	return;
}
