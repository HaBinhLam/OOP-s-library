//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cSinhVien.h"
#include "cCaoDang.h"
#include "cDaiHoc.h"
#include <vector>


class cListSinhVien
{
protected:
	std::vector<cSinhVien*>danhsach;
public:
	//nhom ham khoi tao
	cListSinhVien(int a = 0);
	~cListSinhVien();

	//nhom ham  xu ly
	void nhap_danhsach();
	void xuat_danhsach();

	void xuat_ds_totnghiep();
	void xuat_ds_0totnghiep();

	float dtb_daihoc_highest();
	float dtb_caodang_highest();
	void xuat_sv_dtb_daihoc_highest();
	void xuat_sv_dtb_caodang_highest();
	
	void xuat_soluong_0totnghiep_moiloai();



};

