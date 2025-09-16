//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#pragma once
#include <iostream>
using namespace std;

class cFraction
{
private:
	int numerator;
	int denominator;

public:
	//nhom ham khoi tao
	cFraction(int num = 0, int den = 1);

	//nhom ham get set
	int gettu()const;
	int getmau()const;
	void settu(const int& n);
	void setmau(const int& d);

	//nhom ham xu li
	int gcd(int, int);
	void simplify();

	cFraction operator+(const cFraction& ps);
	cFraction operator-(const cFraction& ps);
	cFraction operator*(const cFraction& ps);
	cFraction operator/(const cFraction& ps);

	bool operator==(const cFraction& ps);
	bool operator>(const cFraction& ps);
	bool operator<(const cFraction& ps);

	friend ostream& operator<<(ostream& out, cFraction& ps);
	friend istream& operator>>(istream& in, cFraction& ps);


};

