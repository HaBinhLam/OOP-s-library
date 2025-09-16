//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#pragma once
#include <iostream>
using namespace std;

class cComplex
{
private:
	double real;
	double image;
public:
	//nhom ham khoi tao
	cComplex(double r = 0, double i = 0);

	//nhom ham get set
	double getreal()const;
	double getimage()const;
	void setreal(const double& r);
	void setimage(const double& i);

	//nhom ham xu li
	cComplex operator+(const cComplex&);
	cComplex operator-(const cComplex&);
	cComplex operator*(const cComplex&);
	cComplex operator/(const cComplex&);

	bool operator==(const cComplex&);
	bool operator!=(const cComplex&);

	friend ostream& operator<<(ostream& out, const cComplex&);
	friend istream& operator>>(istream& in, cComplex&);

	bool complex_bang0();
};
//gom bai 3, bai 4
//tang gio toi qua muc thi tang luon ngay, cai dat lop cDateTime
//lai suat ngan hang: ngay gui, ngay dao han, lai suat don vi theo nam, chia ra theo ngay