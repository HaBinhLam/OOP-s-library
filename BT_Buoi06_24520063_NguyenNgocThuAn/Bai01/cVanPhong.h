//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include "cNhanVien.h"

class cVanPhong : public cNhanVien
{
protected:
	unsigned long long day_of_work;

public:
	//nhom ham khoi tao
	cVanPhong(std::string a = "", cDate b = cDate(1, 1, 1), unsigned long long c = 0, bool type=1, unsigned long long  d = 0);

	//nhom ham set get
	void set_day_of_work(const unsigned long&);
	unsigned long long get_day_of_work();

	//nhom ham xu ly
	void Nhap();
	void Xuat();
	void calculate_salary();
};

