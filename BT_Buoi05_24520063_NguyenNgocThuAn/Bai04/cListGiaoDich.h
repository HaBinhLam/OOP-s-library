//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include <vector>
#include "cDat.h"
#include "cNhaPho.h"
#include "cCanHo.h"

class cListGiaoDich
{
protected:
	std::vector<cDat>list_dat;
	std::vector<cNhaPho>list_nhapho;
	std::vector<cCanHo>list_canho;
public:
	//nhom ham khoi tao
	cListGiaoDich(int a = 0, int b = 0, int c = 0);

	//nhom ham set get
	void set_size_dat(const int&);
	void set_size_nhapho(const int&);
	void set_size_canho(const int&);

	int get_size_dat();
	int get_size_nhapho();
	int get_size_canho();

	//nhom ham xu ly
	void Nhap();
	void Xuat();
	void xuat_tong_soluong_tungloai();
	double tb_thanhtien_canho();
	double thanhtien_np_highest();
	void thanhtien_nhapho_highest();
	void gd_thang12_nam2024();




};

