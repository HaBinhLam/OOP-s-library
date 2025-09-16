//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#pragma once
#include "cDiem.h"
#include <iostream>

class cTamGiac
{
private:
	cDiem A, B, C;
public:
	//nhom ham khoi tao
	cTamGiac(cDiem a, cDiem b, cDiem c);
	cTamGiac();

	//nhom ham xu li
	void nhap_tamgiac();
	void xuat_tamgiac();
	
	bool tamgiac_deu();
	bool tamgiac_vuong();
	bool tamgiac_can();
	void xuat_loaitamgiac();

	double tinh_chuvi();
	double tinh_dientich();

	cTamGiac tinhtien_tamgiac(const cDiem& d2);
	cTamGiac quay_tamgiac(const double& goc);

	cDiem trong_tam();
	cTamGiac phongto_tamgiac(const double& k);
	
};

