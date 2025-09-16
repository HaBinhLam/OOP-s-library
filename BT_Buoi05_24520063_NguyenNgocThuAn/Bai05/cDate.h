//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1
#pragma once
#include <iostream>

class cDate
{
private:
	unsigned short day, month, year;
public:
	//nhom ham khoi tao
	friend class cGiaoDich;
	cDate(unsigned short a = 1, unsigned short b = 1, unsigned short c = 0);

	//nhom ham set get
	void set_day(const unsigned short&);
	void set_month(const unsigned short&);
	void set_year(const unsigned short&);

	unsigned short get_day();
	unsigned short get_month();
	unsigned short get_year();

	//nhom ham xu ly
	friend std::istream& operator>>(std::istream&, cDate&);
	friend std::ostream& operator<<(std::ostream&, const cDate&);
};

