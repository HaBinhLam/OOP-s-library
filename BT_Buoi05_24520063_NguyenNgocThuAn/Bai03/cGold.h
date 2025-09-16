//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include <string>
#include "cGiaoDich.h"

class cGold:public cGiaoDich
{
protected:
	std::string loaivang;
	unsigned long long thanhtien;

public:
	//nhom ham khoi tao
	cGold(std::string a = "", unsigned long long b = 0);

	//nhom ham set get
	void set_loaivang(const std::string&);
	void set_thanhtien(const unsigned long long&);

	std::string get_loaivang();
	unsigned long long get_thanhtien();

	//nhom ham xu ly

	void Nhap();
	void Xuat();

};

