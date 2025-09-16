//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include "cGiaSuc.h"
#include "cBo.h"
#include "cCuu.h"
#include "cDe.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

class cNongTrai
{
protected:
	cBo cow;
	cCuu sheep;
	cDe goat;
public:
	cNongTrai();

	void nhap_nongtrai();
	void nongtrai_doi();
	void thongke_sau_1lua();


};

