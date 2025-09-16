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
	unsigned int soluong;
public:
	//nhom ham khoi tao
	cGiaoDich(std::string a = "",cDate d=cDate(1,1,1), unsigned long long b = 0, unsigned int c = 0);
	
	//nhom ham set get
	void set_ma_giaodich(const std::string&);
	void set_dongia(const unsigned long long&);
	void set_soluong(const unsigned int&);
	void set_ngay_giaodich(const cDate&);

	std::string get_ma_giaodich();
	unsigned long long get_dongia();
	unsigned int get_soluong();
	cDate get_ngay_giaodich();
	
	//nhom ham xu li
	void Nhap();
	void Xuat();


};

