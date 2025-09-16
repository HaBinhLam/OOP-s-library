//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#pragma once
#include <iostream>
#include "cNhanVienSX.h"
#include <vector>


using namespace std;

class cListNhanVienSX
{
private:
	vector<cNhanVienSX> ds;
public:
	//nhom ham khoi tao
	cListNhanVienSX(int n = 0);
	//nhom ham set get
	int getsoluong_nhanvien();
	//nhom ham xu ly
	void nhap_danhsach();
	void xuat_danhsach();
	double tim_luongthapnhat();
	void xuat_NVluongthapnhat();
	short tim_tuoicaonhat();
	void xuat_NVtuoicaonhat();
	double tinh_tongluong();
	void sapxeptang_luong();

};

