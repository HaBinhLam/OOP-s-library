//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1
#pragma once
#include "cNhanVien.h"
class cNVSanXuat :  public cNhanVien
{
protected:
	unsigned long long salary_basic;
	unsigned int amount_product;
	unsigned long long salary;
	
public:
	//nhom ham khoi tao
	cNVSanXuat(unsigned long long a = 0, unsigned int b=0, unsigned long long c=0);

	//nhom ham set get
	void set_salary_basic(const unsigned long long&);
	void set_amount_product(const unsigned int&);
	void set_salary(const unsigned long long&);

	unsigned long long get_salary_basic();
	unsigned int get_amount_product();
	unsigned long long get_salary();

	//nhom ham xu ly

	void Nhap();
	void Xuat();

};

