//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


class cArray
{
private:
	vector<int> a;
public:
	//nhom ham khoi tao
	cArray(int n = 0, int min_giatri = 0, int max_giatri = 100);

	//nhom ham set/get

	//nhom ham xu li
	void xuat_mang()const;
	int dem_solanxuathien(const int& a);
	bool mang_tangdan()const;
	int sole_nhonhat()const;
	bool songuyento(int n)const;
	int songuyento_lonnhat()const;
	void sapxep_tangdan();
	void sapxep_giamdan();



	


};

