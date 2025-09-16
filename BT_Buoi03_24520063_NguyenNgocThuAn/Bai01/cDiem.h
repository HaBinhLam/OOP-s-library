//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#pragma once
#include <iostream>
#include <cmath>
#include <iomanip>

class cDiem
{
private:
	double hoanhdo, tungdo;
public:

	//nhom ham khoi tao
	friend class cTamGiac;
	cDiem(double x = 0, double y = 0);

	//nhom ham set/get
	void sethoanh(double x);
	void settung(double y);
	double gettung() const;
	double gethoanh() const;

	//nhom ham xu li
	void nhap_diem();
	void xuat_diem()const;
	
	double tinh_khoangcach(const cDiem& d2);
	void nhap_vectortinhtien();
	cDiem tinhtien_diem(const cDiem& d2);

	cDiem quay_goc(const double& goc);
	cDiem phongto_diem(const cDiem& trongtam,const double& k);
	

	

};

