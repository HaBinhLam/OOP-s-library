//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#pragma once
#include <iostream>
#include <vector>
#include "cVector.h"

class cMatrix
{
private:
	int rows, cols;
	std::vector<std::vector<double>> matran;
public:
	//nhom ham khoi tao
	cMatrix(int hang = 1, int cot = 1);

	//nhom ham set get
	void set_cot(int&);
	void set_hang(int&);
	int get_cot()const;
	int get_hang()const;

	//nhom ham xu li
	friend std::istream& operator>>(std::istream&, cMatrix&);
	friend std::ostream& operator<<(std::ostream&, cMatrix&);

	cMatrix operator*(const cMatrix&);
	cVector operator*(const cVector&);
};

