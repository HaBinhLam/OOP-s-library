//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include <iostream>
#include "cListGiaoDich.h"

using namespace std;

int main()
{
	cListGiaoDich a;
	a.Nhap();
	
	a.Xuat();

	a.xuat_tong_soluong_tungloai();

	cout << "\nTrung binh thanh tien cua giao dich Can ho chung cu: " << a.tb_thanhtien_canho() << endl;

	a.thanhtien_nhapho_highest();

	a.gd_thang12_nam2024();
	
	cout << "\n\n\n";

	return 0;
}