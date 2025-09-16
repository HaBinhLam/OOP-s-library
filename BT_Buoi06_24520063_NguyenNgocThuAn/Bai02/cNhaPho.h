//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cGiaoDich.h"
class cNhaPho : public cGiaoDich
{
protected:
	bool caocap;
	std::string diachi;
public:
	cNhaPho(std::string a = "", Date b = Date(1, 1, 1), unsigned long long c = 0, unsigned short d = 1, unsigned long long e = 0, double f = 0, bool g=0, std::string h="");

	void set_caocap(const bool&);
	void set_diachi(const std::string&);

	bool get_caocap();
	std::string get_diachi();

	void Nhap();
	void Xuat();
	void tinh_thanhtien();

};

