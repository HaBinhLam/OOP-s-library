//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#pragma once
#include "cDate.h"
#include "cTime.h"
#include <iostream>

class cDateTime
{
private:
	cDate calendar;
	cTime clock;
public:
	//nhom ham khoi tao
	cDateTime(cDate a = cDate(1, 1, 0), cTime b = cTime(0, 0, 0));

	//nhom ham get set
	void set_calendar(const cDate&);
	void set_clock(const cTime&);
	cDate get_calendar();
	cTime get_clock();

	//nhom ham xu ly
	void check_thoigian();
	friend std::istream& operator>>(std::istream& in, cDateTime&);
	friend std::ostream& operator<<(std::ostream& out, const cDateTime&);
	cDateTime& operator++();
	cDateTime& operator--();

};

