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

class cCandidate
{
private:
	string mssv, hoten;
	cBirth sinhnhat;
	float toan, van, anh;
public:
	//nhom ham khoi tao
	cCandidate(string ID = "", string name = "", cBirth a = cBirth(), float math = 0, float lit = 0, float eng = 0);
	//nhom ham set get
	void setmssv(string ID);
	void sethoten(string name);
	void setsinhnhat(cBirth a);
	void settoan(float math);
	void setvan(float lit);
	void setanh(float eng);

	string getmssv()const;
	string gethoten()const;
	cBirth getsinhnhat()const;
	float gettoan()const;
	float getvan()const;
	float getanh()const;

	//nhom ham xu li
	void nhap_thongtin();
	void xuat_thongtin()const;
	float tinh_tongdiem()const;
};

