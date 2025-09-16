//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cKhachHang.h"
#include "cKhachA.h"
#include "cKhachB.h"
#include "cKhachC.h"
#include <iostream>
#include <vector>


class cListKhachHang
{
protected:
	std::vector<cKhachHang*> danhsach;
public:
	//nhom ham khoi tao
	cListKhachHang(int a = 0);

	//nhom ham xu li
	void nhap_danhsach(int , int, int);
	void xuat_danhsach(int, int, int);
	double tinh_tong_tien_thu_duoc();
};

