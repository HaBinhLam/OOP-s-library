//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include <string>
#include "cDate.h"

class cGiaoDich
{
protected:
	std::string ma_giaodich;
	cDate ngay_giaodich;
	unsigned long long dongia;
	double dien_tich;
public:
	//nhom ham khoi tao
	cGiaoDich(std::string a = "", cDate b = cDate(1, 1, 1), unsigned long long c = 0, double e = 0);

	//nhom ham set get
	void set_ma_giaodich(const std::string&);
	void set_ngay_giaodich(const cDate&);
	void set_dongia(const unsigned long long&);
	void set_dientich(const double&);

	std::string get_ma_giaodich();
	cDate get_ngay_giaodich();
	unsigned long long get_dongia();
	double get_dientich();

	//nhom ham xu ly
	void Nhap();
	void Xuat();




};

