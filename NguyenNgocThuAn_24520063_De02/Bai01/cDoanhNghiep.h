#pragma once
#include "cKhachHang.h"
#include <iostream>
#include <string>

class cDoanhNghiep:public cKhachHang
{
protected:
	unsigned int linhvuc_kinhdoanh;
public:
	//nhom ham khoi tao
	cDoanhNghiep(std::string a = "", std::string b = "", std::string c = "", float d = 0, float e = 0, unsigned long long f = 0, cDate g = cDate(1, 1, 1), bool h = 0, unsigned int i = 0);

	
	//nhom ham set get
	void set_linhvuc_kinhdoanh(const unsigned int&);
	unsigned int get_linhvuc_kinhdoanh();

	
	//nhom ham xu li
	void Nhap();
	void Xuat();
	unsigned long long tinh_tien_dien()override;
	void tinh_tien_thanhtoan() override;

};

