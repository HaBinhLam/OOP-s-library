//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cEmployee.h"
#include "cCoder.h"
#include "cTester.h"
#include <vector>

class cListEmployee
{
protected:
	std::vector<cEmployee*> danhsach;
public:
	//nhom ham khoi tao
	cListEmployee(int a = 0);
	~cListEmployee();

	//nhom ham xu li
	void nhap_danhsach();
	void xuat_danhsach();
	double luong_trungbinh();
	void xuat_nv_thaphon_luong_trungbinh();

	unsigned long long luong_highest();
	unsigned long long luong_lowest();

	unsigned long long coder_luong_highest();
	unsigned long long tester_luong_lowest();

	void xuat_nv_luong_highest();
	void xuat_nv_luong_lowest();

	void xuat_coder_luong_highest();
	void xuat_tester_luong_lowest();

};

