//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#pragma once
#include <iostream>
#include <vector>
#include "cDonThuc.h"
using namespace std;

class cDaThuc
{
private:
	vector<cDonThuc>ds;
public:
	//nhom ham khoi tao
	//nhom ham set get
	//nhom ham xu li
	friend istream& operator>>(istream&, cDaThuc&);
	friend ostream& operator<<(ostream&, cDaThuc&);
	double tinh_giatri(double)const;
	cDaThuc operator+(cDaThuc&);
	cDaThuc operator-(cDaThuc&);
};

