//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include <iostream>
#include "cListNhanVienVP.h"

int main() {
	cListNhanVienVP a;
	a.nhap_danhsach();

	cout << "------------------------------------\n";
	cout << "\nDanh sach nhan vien:\n";
	a.xuat_danhsach();

	cout << "------------------------------------\n";
	cout << "\nMuc luong cao nhat la " << a.tim_luongcaonhat() << ", nhan vien co luong cao nhat:\n";
	a.xuat_NVluongcaonhat();

	cout << "------------------------------------\n";
	cout << "\nTong luong ma cong ty phai tra: " << a.tinh_tongluong() << "$\n";

	cout << "------------------------------------\n";
	cout << "\nTuoi cao nhat la " << a.tim_tuoicaonhat() << ", nhan vien co tuoi cao nhat:\n";
	a.xuat_NVtuoicaonhat();

	cout << "------------------------------------\n";
	cout << "\nDanh sach sau khi sap xep tang dan theo luong:\n";
	a.sapxeptang_luong();
	a.xuat_danhsach();

	return 0;
	
}