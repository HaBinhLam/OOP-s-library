//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#pragma once
#include <iostream>
using namespace std;
class cDonThuc
{
private:
	double heso;
	int bac;
public:
	friend class cDaThuc;
	//nhom ham khoi tao
	cDonThuc(double h = 0, int b = 0);

	//nhom ham set get
	void setheso(double&);
	void setbac(int&);
	double getheso();
	int getbac();

	//nhom ham xu li
	friend istream& operator>>(istream& in, cDonThuc&);
	friend ostream& operator<<(ostream& out, const cDonThuc&);
	double tinh_giatri(double)const;
};

