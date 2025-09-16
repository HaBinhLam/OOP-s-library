#pragma once
//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include <iostream>
#include <vector>
#include "cGiaoDich.h"
#include "cGold.h"
#include "cMoney.h"

class cListGiaoDich
{
private:
	std::vector <cGold> list_gold;
	std::vector <cMoney> list_money;

public:
	//nhom ham khoi tao
	cListGiaoDich(int n = 0, int m = 0);

	//nhom ham set get
	void set_size_gold(const int&);
	void set_size_money(const int&);
	int get_size_gold();
	int get_size_money();

	//nhom ham xu ly
	void Nhap();
	void Xuat();
	unsigned long long thanhtien_highest();
	void gold_thanhtien_highest();
	unsigned long long euro_lowest();
	void GD_euro_lowest();
	void GD_thanhtien_tren1ty();


};

