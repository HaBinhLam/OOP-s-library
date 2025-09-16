//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cKhachHang.h"
class cKhachB :   public cKhachHang
{
protected:
	unsigned int sonam_thanthiet;
public:
	//nhom ham khoi tao
	cKhachB(std::string a = "", unsigned int b = 0, double c = 0, unsigned int d = 0);

	//nhom ham set get
	void set_sonam_thanthiet(const unsigned int&);
	unsigned int get_sonam_thanthiet();
	//nhom ham xu li
	void Nhap();
	void Xuat();
	double tinh_tien_phai_tra();
};

