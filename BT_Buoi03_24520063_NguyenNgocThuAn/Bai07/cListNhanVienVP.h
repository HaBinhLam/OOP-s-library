//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#pragma once
#include <iostream>
#include "cNhanVienVP.h"
#include <vector>

using namespace std;

class cListNhanVienVP
{
private:
	vector<cNhanVienVP> ds;
public:
	//nhom ham khoi tao
	cListNhanVienVP(int n = 0);
	//nhom ham set get
	int getsoluong_nhanvien();
	//nhom ham xu ly
	void nhap_danhsach();
	void xuat_danhsach();
	double tim_luongcaonhat();
	void xuat_NVluongcaonhat();
	short tim_tuoicaonhat();
	void xuat_NVtuoicaonhat();
	double tinh_tongluong();
	void sapxeptang_luong();

};

