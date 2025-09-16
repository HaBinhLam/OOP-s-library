//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include "cSach.h"
class cSTK :   public cSach
{
private:
	double thue;
	double thanhtien;
public:
	//nhom ham khoi tao
	cSTK(double a = 0, double b = 0);

	//nhom ham get set
	void set_thue(const double&);
	void set_thanhtien(const double&);
	double get_thue();
	double get_thanhtien();


	//nhom ham xu li
	void Nhap();
	void Xuat();


};

