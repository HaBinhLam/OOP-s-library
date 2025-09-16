//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cEmployee.h"
class cTester : public cEmployee
{
protected:
	unsigned short loi_phathien;
public:
	//nhom ham khoi tao
	cTester(std::string a = "", std::string b = "", unsigned short c = 0, std::string d = "", std::string e = "", unsigned long long f = 0, unsigned long long g = 0, bool h = 0, unsigned short i = 0);

	//nhom ham set get
	void set_loi_phathien(const unsigned short&);
	unsigned get_loi_phathien();

	//nhom ham xu li
	void Nhap();
	void Xuat();
	void tinhtienluong();


};

