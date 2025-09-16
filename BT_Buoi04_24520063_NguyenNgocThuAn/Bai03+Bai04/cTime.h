//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#pragma once
#include <iostream>
class cTime
{
private:
	unsigned short hour, min, sec;

public:
	friend class cDateTime;
	//nhom ham khoi tao
	cTime(unsigned short h = 0, unsigned short m = 0, unsigned short s = 0);
	
	//nhom ham set get
	void set_hour(const unsigned short&);
	void set_min(const unsigned short&);
	void set_sec(const unsigned short&);

	unsigned short get_hour();
	unsigned short get_min();
	unsigned short get_sec();
	
	//nhom ham xu ly
	void check_thoigian();
	void check_giam(const int&);
	friend std::ostream& operator<<(std::ostream& out, const cTime&);
	friend std::istream& operator>>(std::istream& in, cTime&);
	cTime& operator++();
	cTime& operator--();
	
	cTime operator+(const int&);
	cTime operator-(const int&);

};

