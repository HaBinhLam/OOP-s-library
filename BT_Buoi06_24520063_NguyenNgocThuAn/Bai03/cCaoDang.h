//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cSinhVien.h"
class cCaoDang :  public cSinhVien
{
protected:
	float diem_totnghiep;
public:
	//nhom ham khoi tao
	cCaoDang(std::string a = "", std::string b = "", std::string c = "", unsigned short d = 0, float e = 0, bool f = 0, float g = 0);

	//nhom ham set get
	void set_diem_totnghiep(const float&);
	float get_diem_totnghiep();


	//nhom ham xu ly
	void Nhap();
	void Xuat();
	bool xettotnghiep();


};

