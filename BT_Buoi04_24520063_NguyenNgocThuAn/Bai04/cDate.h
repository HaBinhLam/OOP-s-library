//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#pragma once
#include <iostream>

class cDate
{
private:
	unsigned short day, month, year;

public:
	//nhom ham khoi tao
	cDate(unsigned short d = 1, unsigned short m = 1, unsigned short y = 0);
	//nhom ham set get
	void set_day(const unsigned short&);
	void set_month(const unsigned short&);
	void set_year(const unsigned short&);

	unsigned short get_day();
	unsigned short get_month();
	unsigned short get_year();

	//nhom ham xu li
	bool nam_nhuan(unsigned short);
	bool date_hople();

	friend std::ostream& operator<<(std::ostream& out, cDate&);
	friend std::istream& operator>>(std::istream&, cDate&);

	cDate operator+(const int&);
	cDate operator-(const int&);

	cDate& operator++();
	cDate& operator--();

	unsigned int khoangcach_2date(const cDate&);
	double laisuat_nganhang(const float&, const double&, const cDate&);


};

