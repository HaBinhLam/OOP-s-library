#pragma once
#include <iostream>
#include <string>
#include "cKhachHang.h"

class cGiaDinh : public cKhachHang
{
protected:
	bool ho_ngheo;
public:
	//nhom ham khoi tao
	cGiaDinh(std::string a = "", std::string b = "", std::string c = "", float d = 0, float e = 0, unsigned long long f = 0, cDate g = cDate(1, 1, 1), bool h = 0, bool i = 0);
	//nhom ham set get
	void set_ho_ngheo(const bool&);
	bool get_ho_ngheo();

	//nhom ham xu ly
	void Nhap();
	void Xuat();
	unsigned long long tinh_tien_dien()override;
	void tinh_tien_thanhtoan() override;


};

