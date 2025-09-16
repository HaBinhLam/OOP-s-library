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

	a.gold_thanhtien_highest();

	a.GD_euro_lowest();

	a.GD_thanhtien_tren1ty();

	cout << "\n\n\n";

	return 0;
}