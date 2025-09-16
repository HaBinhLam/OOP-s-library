//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#pragma once
#include "cPhanSo.h"
#include <vector>
#include <iostream>
using namespace std;


class cDSPhanSo
{
private:
	vector <cPhanSo> ds;
public:
	//nhom ham khoi tao
	cDSPhanSo();
	void nhap_danhsach();
	void xuat_danhsach() const;

	cPhanSo tinh_tong();
	cPhanSo ps_lonnhat()const;
	cPhanSo ps_nhonhat()const;
	cPhanSo ps_tusolasonguyento_lonnhat()const;

	void sapxep_tang();
	void sapxep_giam();

};

