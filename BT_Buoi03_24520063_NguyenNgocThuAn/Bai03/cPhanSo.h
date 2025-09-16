//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#pragma once
class cPhanSo
{
private:
	int tuso, mauso;
	int gcd(int a, int b);
	void rutgon();

public:
	friend class cDSPhanSo;
	//nhom ham khoi tao
	cPhanSo(int tu = 0, int mau = 1);

	//nhom ham set/get
	void settu(const int& a);
	void setmau(const int& a);
	int gettu();
	int getmau();


	//nhom ham xu li
	void nhap_phanso();
	void xuat_phanso()const;
	double giatrithuc()const;
	bool songuyento(int n) const;
	bool tuso_lasonguyento()const;

	cPhanSo operator+(const cPhanSo& p) const;
	bool operator>(const cPhanSo& p) const;
	bool operator<(const cPhanSo& p)const;

};

