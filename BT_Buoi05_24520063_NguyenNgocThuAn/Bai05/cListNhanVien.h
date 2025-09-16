//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include <vector>
#include "cNVSanXuat.h"
#include "cNVVanPhong.h"

class cListNhanVien
{
protected:
	std::vector<cNVSanXuat>list_sanxuat;
	std::vector<cNVVanPhong>list_vanphong;
public:
	//nhom ham khoi tao
	cListNhanVien(int a = 0, int b = 0);

	//nhom ham set get
	void set_size_list_sx(const int&);
	void set_size_list_vp(const int&);

	int get_size_list_sx();
	int get_size_list_vp();

	//nhom ham xu ly
	void Nhap();
	void Xuat();
	unsigned long long tong_luong_nhanvien();

};


//thi ko ra đa kế thừa