//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include <string>
#include "cChuyenXe.h"
class cNgoaiThanh:public cChuyenXe
{
private:
	std::string noiden;
	unsigned int songay_diduoc;
public:
	//nhom ham khoi tao
	cNgoaiThanh(std::string a = "", unsigned int b = 0);
	//nhom ham set get
	void set_noiden(const std::string&);
	void set_songay_diduoc(const unsigned int&);
	std::string get_noiden();
	unsigned int get_songay_diduoc();

	//nhom ham xu li
	void Nhap();
	void Xuat();
};

