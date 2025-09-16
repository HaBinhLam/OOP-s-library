//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include "cChuyenXe.h"
class cNoiThanh : public cChuyenXe
{
private:
	unsigned int sotuyen;
	unsigned int km_diduoc;
public:
	//nhom ham khoi tao
	cNoiThanh(unsigned int a = 0, unsigned int b = 0);

	//nhom ham set get
	void set_sotuyen(const unsigned int&);
	void set_km_diduoc(const unsigned int&);

	unsigned int get_sotuyen();
	unsigned int get_km_diduoc();

	//nhom ham xu li
	void Nhap();
	void Xuat();


};

