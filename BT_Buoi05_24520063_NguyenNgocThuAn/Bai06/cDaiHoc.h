//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1
#pragma once
#include "cSinhVien.h"
#include <iostream>
#include <string>

class cDaiHoc:public cSinhVien
{
protected:
	std::string ten_luanvan;
	float diem_luanvan;
public:
	//nhom ham khoi tao
	cDaiHoc(std::string a = "", float b = 0);

	//nhom ham set get
	void set_ten_luanvan(const std::string&);
	void set_diem_luanvan(const float&);

	std::string get_ten_luanvan();
	float get_diem_luanvan();

	//nhom ham xu ly
	void Nhap();
	void Xuat();

};

