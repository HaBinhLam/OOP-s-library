//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include <iostream>
#include "cListNhanVienSX.h"

using namespace std;

int main() {
	cListNhanVienSX a;
	a.nhap_danhsach();

	cout << "------------------------------------\n";
	cout << "\nDanh sach nhan vien san xuat\n";
	a.xuat_danhsach();
	cout << "------------------------------------\n";

	cout << "\nMuc luong thap nhat la " << setprecision(2) << fixed << a.tim_luongthapnhat() << "$, nhan vien co luong thap nhat la:\n";
	a.xuat_NVluongthapnhat();
	cout << "------------------------------------\n";

	cout << "Tong luong ma cong ty phai tra: " << setprecision(2) << fixed << a.tinh_tongluong() << "$\n";
	cout << "------------------------------------\n";

	cout << "\nTuoi cao nhat la " << a.tim_tuoicaonhat() << " tuoi, nhan vien co tuoi cao nhat:\n";
	a.xuat_NVtuoicaonhat();
	cout << "------------------------------------\n";

	cout << "\nDanh sach nhan vien tang dan theo luong:\n";
	a.sapxeptang_luong();
	a.xuat_danhsach();

}