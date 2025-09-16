//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cSinhVien.h"
class cCaoDang : public cSinhVien
{
protected:
	float diem_totnghiep;
public:
	//nhom ham khoi tao
	cCaoDang(float a = 0);

	//nhom ham set get
	void set_diem_totnghiep(const float&);
	float get_diem_totnghiep();

	//nhom ham xu li
	void Nhap();
	void Xuat();


};

