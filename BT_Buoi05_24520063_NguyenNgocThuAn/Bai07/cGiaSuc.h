//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
class cGiaSuc
{
protected:
	unsigned int soluong;
public:
	//nhom ham khoi tao
	cGiaSuc(unsigned int a = 0);
	
	//nhom ham set get
	unsigned int get_soluong();
	void set_soluong(const unsigned int&);

	//nhom ham xu li
	virtual void keu() = 0;
	virtual unsigned int sinhcon() = 0;
	virtual unsigned int chomilk() = 0;




};

