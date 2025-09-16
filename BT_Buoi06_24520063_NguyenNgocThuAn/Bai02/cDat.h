//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cGiaoDich.h"
class cDat:public cGiaoDich
{
protected:
	char loaidat;
public:
	cDat(std::string a = "", Date b = Date(1, 1, 1), unsigned long long c = 0, unsigned short d = 1, unsigned long long e = 0, double f = 0, char g = 'A');

	void set_loaidat(const char&);
	char get_loaidat();

	void Nhap();
	void Xuat();
	void tinh_thanhtien();
};

