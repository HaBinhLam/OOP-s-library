//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cGiaoDich.h"
#include "cDat.h"
#include "cNhaPho.h"
#include "cCanHo.h"
#include "Date.h"
#include "vector"
#include "iomanip"

class cListGiaoDich
{
protected:
	std::vector<cGiaoDich*> danhsach;
public:
	//nhom ham khoi tao
	cListGiaoDich(int a = 0);
	~cListGiaoDich();


	//nhom ham xu ly
	void nhap_danhsach();
	void xuat_danhsach();

	void xuat_tongsoluong_tungloai();
	double tinh_tb_thanhtien_canho();
	void xuat_tb_thanhtien_canho();
	unsigned long long thanhtien_nhapho_highest();
	void xuat_thanhtien_nhapho_highest();
	void xuat_giaodich_tgian(unsigned short thang = 12, unsigned short nam = 2024);

};

