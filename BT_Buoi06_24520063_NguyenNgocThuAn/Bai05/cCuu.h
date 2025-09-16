//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cGiaSuc.h"
class cCuu :   public cGiaSuc
{
public:
	//nhom ham khoi tao
	cCuu(unsigned int a = 0);

	//nhom ham xu ly
	void keu() override;
	unsigned int sinhcon() override;
	unsigned int chomilk()override;
};

