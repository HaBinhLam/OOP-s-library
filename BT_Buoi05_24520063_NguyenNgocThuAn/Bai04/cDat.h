//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include "cGiaoDich.h"

class cDat :public cGiaoDich
{
protected:
	char loai_dat;
	double thanhtien;
public:
	//nhom ham khoi tao
	cDat(char a = 'A', double b=0);

	//nhom ham set get
	void set_loai_dat(const char&);
	char get_loai_dat();
	void set_thanhtien(const double&);
	double get_thanhtien();

	//nhom ham xu li
	void Nhap();
	void Xuat();

};

