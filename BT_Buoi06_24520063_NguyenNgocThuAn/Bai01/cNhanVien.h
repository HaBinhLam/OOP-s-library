//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include <string>
#include "cDate.h"


class cNhanVien
{
protected:
	std::string name;
	cDate birthday;
	unsigned long long salary;
	bool vanphong;
public:
	//nhom ham khoi tao
	cNhanVien(std::string a = "", cDate b = cDate(1, 1, 1), unsigned long long c = 0, bool type = 1);

	//nhom ham set get
	void set_name(const std::string&);
	void set_birthday(const cDate&);
	void  set_salary(const unsigned long long&);
	void set_vanphong(const bool&);

	std::string get_name();
	cDate get_birthday();
	unsigned long long get_salary();
	bool get_vanphong();


	//nhom ham xu ly
	virtual void Nhap();
	virtual void Xuat();
	virtual void calculate_salary() = 0;


};

