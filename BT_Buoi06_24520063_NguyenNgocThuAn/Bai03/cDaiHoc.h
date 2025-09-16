//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cSinhVien.h"
class cDaiHoc : public cSinhVien
{
protected:
	std::string ten_luanvan;
	float diem_luanvan;
public:
	//nhom ham khoi tao
	cDaiHoc(std::string a = "", std::string b = "", std::string c = "", unsigned short d = 0, float e = 0, bool f = 0, std::string g = "", float h = 0);

	//nhom ham set get
	void set_ten_luanvan(const std::string&);
	void set_diem_luanvan(const float&);

	std::string get_ten_luanvan();
	float get_diem_luanvan();

	//nhom ham xu ly
	void Nhap();
	void Xuat();
	bool xettotnghiep();




};

