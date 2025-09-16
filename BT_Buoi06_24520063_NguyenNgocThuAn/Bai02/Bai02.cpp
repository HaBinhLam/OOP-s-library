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
	
	a.nhap_danhsach();
	
	a.xuat_tongsoluong_tungloai();

	a.xuat_tb_thanhtien_canho();

	a.xuat_thanhtien_nhapho_highest();

	a.xuat_giaodich_tgian(12);

}