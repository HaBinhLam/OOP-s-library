//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1
#pragma once
#include "cNhanVien.h"
class cNVVanPhong : public cNhanVien
{
protected:
	unsigned int working_day;
	unsigned long long salary;

public:
	//nhom ham khoi tao
	cNVVanPhong(unsigned int a = 0, unsigned long long b = 0);

	//nhom ham set get
	void set_working_day(const unsigned int&);
	void set_salary(const unsigned long long&);

	unsigned int get_working_day();
	unsigned long long get_salary();

	//nhom ham xu ly
	void Nhap();
	void Xuat();
	  

};

