//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include <iostream>
#include "cListNhanVien.h"

using namespace std;

int main() {
	cListNhanVien a;
	a.nhap_danhsach();

	a.xuat_danhsach();

	a.xuat_tong_luong_cty_tra();

	a.xuat_sanxuat_salary_lowest();

	a.xuat_vanphong_oldest();

}