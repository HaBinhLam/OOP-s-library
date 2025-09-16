//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cGiaoDich.h"
class cCanHo : public cGiaoDich
{
protected:
	std::string ma_canho;
	unsigned short vitri_tang;
public:
	//nhom ham khoi tao
	cCanHo(std::string a = "", Date b = Date(1, 1, 1), unsigned long long c = 0, unsigned short d = 1, unsigned long long e = 0, double f = 0, std::string g = "", unsigned short h = 0);

	//nhom ham set get
	void set_ma_canho(const std::string&);
	void set_vitri_tang(const unsigned short&);
	std::string get_ma_canho();
	unsigned short get_vitri_tang();


	//nhom ham xu ly
	void Nhap();
	void Xuat();
	void tinh_thanhtien();


};

