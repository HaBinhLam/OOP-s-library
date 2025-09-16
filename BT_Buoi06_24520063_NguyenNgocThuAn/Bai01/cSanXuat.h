//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cNhanVien.h"

class cSanXuat : public cNhanVien
{
protected:
	unsigned long long base_salary;
	unsigned int product;
public:
	//nhom ham khoi tao
	cSanXuat(std::string a = "", cDate b = cDate(1, 1, 1), unsigned long long c = 0, unsigned int  d = 0, bool type = 1,unsigned long long e=0);

	//nhom ham set get
	void set_product(const unsigned int&);
	void set_base_salary(const unsigned long long&);

	unsigned int get_product();
	unsigned long long get_base_salary();


	//nhom xu li
	virtual void Nhap();
	virtual void Xuat();
	void calculate_salary();


};

