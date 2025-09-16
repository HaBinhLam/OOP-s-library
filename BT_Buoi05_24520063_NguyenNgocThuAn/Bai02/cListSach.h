//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "cSGK.h"
#include "cSTK.h"


class cListSach
{
private:
	std::vector<cSGK> list_sgk;
	std::vector<cSTK> list_stk;
public:
	//nhom ham khoi tao
	cListSach(int a = 0, int b = 0);

	//nhom ham get set
	void set_size_sgk(const int&);
	void set_size_stk(const int&);

	int get_size_sgk();
	int get_size_stk();
	
	//nhom ham xu ly
	void Nhap();
	void Xuat();
	unsigned long long tong_tien_sgk();
	unsigned long long tong_tien_stk();
	double tbc_dongia_stk();
	void xuat_tien_sach();
	void timsach(const std::string&);


};

