//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include <string>
#include "Date.h"

class cGiaoDich
{
protected:
	std::string ma_giaodich;
	Date ngay_giaodich;
	double dientich;
	unsigned long long don_gia;
	unsigned long long thanh_tien;
	unsigned short type; //1: gd dat// 2: gd nha pho // 3: gd can ho chung cu
public:
	//nhom ham khoi tao
	cGiaoDich(std::string a = "", Date b = Date(1, 1, 1), unsigned long long c = 0, unsigned short d = 1, unsigned long long e=0, double f=0);

	//nhom ham set get
	void set_ma_giaodich(const std::string&);
	void set_ngay_giaodich(const Date&);
	void set_don_gia(const unsigned long long&);
	void set_type(const unsigned short&);
	void set_dientich(const double&);
	void set_thanh_tien(const unsigned long long&);

	std::string get_ma_giaodich();
	Date get_ngay_giaodich();
	unsigned long long get_don_gia();
	unsigned short get_type();
	double get_dientich();
	unsigned long long get_thanh_tien();

	//nhom ham xu ly
	virtual void Nhap();
	virtual void Xuat();
	virtual void tinh_thanhtien() = 0;

};

