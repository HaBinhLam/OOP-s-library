//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cKhachHang.h"
class  cKhachA  : public cKhachHang
{
public:
	//nhom ham khoi tao
	cKhachA(std::string a = "", unsigned int b = 0, double c = 0);
	//nhom ham xu li
	void Nhap() override;
	void Xuat() override;
	double tinh_tien_phai_tra();



};

