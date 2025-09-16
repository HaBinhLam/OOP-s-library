//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include <iostream>
#include "cListSinhVien.h"

using namespace std;

int main() {
	cListSinhVien a;
	a.nhap_danhsach();
	
	a.xuat_danhsach();

	a.xuat_ds_totnghiep();

	a.xuat_ds_0totnghiep();

	a.xuat_sv_dtb_daihoc_highest();

	a.xuat_sv_dtb_caodang_highest();

	a.xuat_soluong_0totnghiep_moiloai();

	cout << endl << endl;
}