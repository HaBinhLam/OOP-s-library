//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include "cGiaoDich.h"

class cNhaPho: public cGiaoDich
{
protected:
	bool loai_nha_caocap;
	std::string dia_chi;
	double thanhtien;
public:
	//nhom ham khoi tao
	cNhaPho(bool a=0, std::string b = "", double c=0);

	//nhom ham set get
	void set_loai_nha(const bool&);
	void set_dia_chi(const std::string&);
	bool get_loai_nha();
	std::string get_dia_chi();
	void set_thanhtien(const double&);
	double get_thanhtien();

	//nhom ham xu li
	void Nhap();
	void Xuat();

};

