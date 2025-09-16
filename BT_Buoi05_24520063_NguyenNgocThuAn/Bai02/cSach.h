//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include <string>
#include "cDate.h"

class cSach
{
protected:
	std::string masach;
	cDate ngay_nhap;
	unsigned long long don_gia;
	int so_luong;
	std::string NXB;
	
public:
	//nhom ham khoi tao
	cSach(std::string a = "", cDate b = cDate(1, 1, 1), unsigned long long c = 0, int d = 0, std::string e = "");

	//nhom ham set get
	void set_masach(const std::string&);
	void set_ngay_nhap(const cDate&);
	void set_don_gia(const unsigned long long&);
	void set_soluong(const int&);
	void set_NXB(const std::string&);

	std::string get_masach();
	cDate get_ngay_nhap();
	unsigned long long get_don_gia();
	int get_soluong();
	std::string get_NXB();
	
	//nhom ham xu ly
	void Nhap();
	void Xuat();
	



};

