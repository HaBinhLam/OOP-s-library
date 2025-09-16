//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include "cSach.h"
class cSGK : public cSach
{
private:
	bool old;
	double thanhtien;
public:
	//nhom ham khoi tao
	cSGK(bool a = 1, double b = 0);

	//nhom ham set get
	void set_old(const bool&);
	void set_thanhtien(const double&);
	bool get_old();
	double get_thanhtien();


	//nhom ham xu li
	void Nhap();
	void Xuat();
	


};

