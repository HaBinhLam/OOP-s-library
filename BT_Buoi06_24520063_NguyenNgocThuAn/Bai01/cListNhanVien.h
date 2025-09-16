//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include <vector>
#include "cNhanVien.h"
#include "cSanXuat.h"
#include "cVanPhong.h"


class cListNhanVien
{
protected:
	std::vector<cNhanVien*> list;
public:
	cListNhanVien(int a = 
0);
	~cListNhanVien();

	void nhap_danhsach();
	void xuat_danhsach();
	unsigned long long total_salary();
	unsigned long long sanxuat_salary_lowest();
	void xuat_tong_luong_cty_tra();
	void xuat_sanxuat_salary_lowest();
	unsigned short vanphong_oldest();
	void xuat_vanphong_oldest();

};

