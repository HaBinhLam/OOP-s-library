//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#pragma once
#include <iostream>
#include <vector>


class cVector
{
private:
	std::vector<double>toado;
public:
	//nhom ham khoi tao
	cVector(int n = 1);
	cVector(const std::vector<double>&);
	//nhom ham set get
	int get_sochieu()const;
	void set_sochieu(const int&);

	//nhom ham xu li
	friend std::istream& operator>>(std::istream&, cVector&);
	friend std::ostream& operator<<(std::ostream&, const cVector&);
	friend class cMatrix;
};


