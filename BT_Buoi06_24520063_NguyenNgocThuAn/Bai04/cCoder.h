//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cEmployee.h"
class cCoder :  public cEmployee
{
protected:
	unsigned short sogio_overtime;
public:
	//nhom ham khoi tao
	cCoder(std::string a = "", std::string b = "", unsigned short c = 0, std::string d = "", std::string e = "", unsigned long long f = 0, unsigned long long g = 0, bool h = 0, unsigned short i=0);

	//nhom ham set get
	void set_sogio_overtime(const unsigned short&);
	unsigned short get_sogio_overtime();


	//nhom ham xu li
	void Nhap();
	void Xuat();
	void tinhtienluong();

};

