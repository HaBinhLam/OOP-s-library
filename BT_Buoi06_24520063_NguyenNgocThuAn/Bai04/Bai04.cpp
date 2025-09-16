//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cListEmployee.h"
#include <iostream>

using namespace std;

int main() {
	cListEmployee a;

	a.nhap_danhsach();

	a.xuat_danhsach();

	a.xuat_nv_thaphon_luong_trungbinh();

	a.xuat_nv_luong_highest();

	a.xuat_nv_luong_lowest();

	a.xuat_coder_luong_highest();

	a.xuat_tester_luong_lowest();

}