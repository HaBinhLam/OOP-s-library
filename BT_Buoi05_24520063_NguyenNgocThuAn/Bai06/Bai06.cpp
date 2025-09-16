//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1
#include <iostream>
#include "cListSinhVien.h"


using namespace std;

int main() {
	cListSinhVien a;

	a.Nhap();

	a.Xuat();

	a.xuat_sv_totnghiep();

	a.xuat_sv_0totnghiep();

	a.xuat_sv_dh_diem_tb_highest();

	return 0;
}