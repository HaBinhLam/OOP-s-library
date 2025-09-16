//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#pragma once
#include <iostream>
#include "cCandidate.h"
#include <vector>

class cListCandidate
{
private:
	vector<cCandidate> ds;
public:
	//nhom ham khoi tao
	cListCandidate(int n = 0);
	//nhom ham set get
	int getsoluong_thisinh();
	//nhom ham xu ly
	void nhap_danhsach();
	void xuat_tongdiemhon15()const;
	void xuat_danhsach()const;
	float tim_diemcaonhat()const;
	void xuat_diemcaonhat()const;
	void sapxep_giamdan();
};
