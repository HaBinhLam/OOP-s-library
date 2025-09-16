//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cGiaoDich.h"
#include <iostream>

class cMoney:public cGiaoDich
{
protected:
	float ti_gia;
	int loai_tiente;//-1: tien Viet; 0: tien USD; 1: tien Euro
	unsigned long long thanhtien;
public:
	//nhom ham khoi tao
	cMoney(float a = 0, int b = 0, unsigned long long c=0);

	//nhom ham set get
	void set_tigia(const float&);
	void set_loaitiente(const int&);
	void set_thanhtien(const unsigned long long&);
	float  get_tigia();
	int get_loaitiente();
	unsigned long long get_thanhtien();

	//nhom ham xu li
	void Nhap();
	void Xuat();


};

