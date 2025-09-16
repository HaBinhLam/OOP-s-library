#pragma once
#include "cNgoaiThanh.h"
#include "cNoiThanh.h"
#include<iostream>
#include <vector>
#include "cNgoaiThanh.h"
//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cNoiThanh.h"

class cListChuyenXe
{
private:
	std::vector<cNoiThanh> list_chuyenxe_nt;
	std::vector<cNgoaiThanh> list_chuyenxe_ngt;
public:
	//nhom ham khoi tao
	cListChuyenXe(int a=1, int b=1);

	//nhom ham set get
	void set_chieu_nt(const int&);
	void set_chieu_ngt(const int&);
	int get_chieu_nt();
	int get_chieu_ngt();

	//nhom ham xu ly

	void Nhap();
	void Xuat();
	unsigned long long tong_doanhthu_nt();
	unsigned long long tong_doanhthu_ngt();
	void xuat_tongdoanhthu();

	~cListChuyenXe();


};

