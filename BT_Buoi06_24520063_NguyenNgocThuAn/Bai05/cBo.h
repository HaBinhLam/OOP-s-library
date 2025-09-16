//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include "cGiaSuc.h"
class cBo :  public cGiaSuc
{
public:
	//nhom ham khoi tao
	cBo(unsigned int a = 0);

	//nhom ham xu li
	void keu()override;
	unsigned int sinhcon()override;
	unsigned int chomilk()override;


};

