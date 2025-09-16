//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#pragma once
#include "Diem.h"

class cDaGiac
{
private: 
	int soDinh;
	Diem* dinh;
public:
	//nhom ham khoi tao
	cDaGiac(int n = 3);
	

	//nhom ham set/get
	void setdinh(int& a);
	int getdinh();


	//nhom ham xu li
	void nhap_dagiac();
	void xuat_dagiac()const;
	double tinh_chuvi()const;
	double tinh_dientich()const;
	cDaGiac tinhtien(const Diem& d2);
	cDaGiac quay(const double& goc);
	Diem tinh_trongtam() const;
	cDaGiac phongto_thunho(const double& k);

	~cDaGiac();
};

