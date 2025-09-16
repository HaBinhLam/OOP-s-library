//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "cBirth.h"
using namespace std;

class cNhanVienVP
{
private:
	string ID, name;
	cBirth birth;
	double salary;
public:
	//nhom ham khoi tao
	cNhanVienVP(string a = "", string b = "", cBirth c = cBirth(), double d = 0);
	
	//nhom ham set get
	void setID(const string& a);
	void setname(const string& b);
	void setbirth(const cBirth& c);
	void setsalary(const double& d);

	string getID();
	string getname();
	cBirth getbirth();
	double getsalary();

	//nhom ham xu li
	void nhap_thongtin();
	void xuat_thongtin();
	short tinh_tuoi()const;

};

