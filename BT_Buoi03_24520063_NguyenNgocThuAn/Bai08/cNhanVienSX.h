
#pragma once

#include <iostream>
#include <string>
#include <iomanip>
//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cBirth.h"
using namespace std;

class cNhanVienSX
{
private:
	string ID, name;
	cBirth birth;
	int product;
	double cost;
public:
	//nhom ham khoi tao
	cNhanVienSX(string a = "", string b = "", cBirth c = cBirth(), int d = 0, double e = 0);

	//nhom ham set get
	void setID(const string& a);
	void setname(const string& b);
	void setbirth(const cBirth& c);
	void setproduct(const int& d);
	void setcost(const double& e);

	string getID();
	string getname();
	cBirth getbirth();
	int getproduct();
	double getcost();

	//nhom ham xu li
	void nhap_thongtin();
	void xuat_thongtin();
	double tinh_luong()const;
	short tinh_tuoi()const;

};

