//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include "cGiaoDich.h"
class cCanHo:public cGiaoDich
{
protected:
	std::string ma_can;
	unsigned short vitri_tang;
	double thanhtien;
public:
	//nhom ham khoi tao
	cCanHo(std::string a = "", unsigned short b = 0);

	//nhom ham set get
	void set_ma_can(const std::string&);
	void set_vitri_tang(const unsigned short&);
	std::string get_ma_can();
	unsigned short get_vitri_tang();
	void set_thanhtien(const double&);
	double get_thanhtien();

	//nhom ham xu ly
	void Nhap();
	void Xuat();

};

