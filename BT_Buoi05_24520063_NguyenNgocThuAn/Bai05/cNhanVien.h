//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include "cDate.h"
#include <string>


class cNhanVien
{
protected:
	std::string name;
	cDate birthday;
public:
	//nhom ham khoi tao
	cNhanVien(std::string a = "", cDate b = cDate(1, 1, 1));

	//nhom ham set get
	void set_name(const std::string&);
	void set_birthday(const cDate&);

	std::string get_name();
	cDate get_birthday();

	//nhom ham xu ly
	void Nhap();
	void Xuat();


};

