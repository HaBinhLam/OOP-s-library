

#pragma once
#include <iostream>

class cDate
{
private:
	unsigned short day, month, year;
public:
	//nhom ham khoi tao
	friend class cSach;
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

