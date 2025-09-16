//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1
#include <iostream>
#include "cListNhanVien.h"

using namespace std;

int main()
{
	cListNhanVien a;

	a.Nhap();

	a.Xuat();

	cout << "\n-------------------------------\n";
	cout << "\nTONG LUONG CONG TY PHAI TRA CHO NHAN VIEN: " << a.tong_luong_nhanvien() << " dong";
	cout << "\n\n\n";

	return 0;
}