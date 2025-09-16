//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1
#pragma once
#include "cDaiHoc.h"
#include "cCaoDang.h"
#include <iostream>
#include <vector>

class cListSinhVien
{
protected:
	std::vector<cDaiHoc> list_sv_dh;
	std::vector<cCaoDang> list_sv_cd;

public:
	//nhom ham khoi tao
	cListSinhVien(int a = 0, int b = 0);

	//nhom ham set get
	void set_size_dh(const int&);
	void set_size_cd(const int&);

	int get_size_dh();
	int get_size_cd();

	//nhom ham xu li
	void Nhap();
	void Xuat();
	void xuat_sv_totnghiep();
	void xuat_sv_0totnghiep();
	float diem_tb_dh_highest();
	void xuat_sv_dh_diem_tb_highest();

	


};

