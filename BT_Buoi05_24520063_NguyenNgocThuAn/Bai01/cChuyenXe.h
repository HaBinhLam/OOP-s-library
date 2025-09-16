//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>

class cChuyenXe
{
protected:
	std::string maso_chuyen;
	std::string hoten_taixe;
	std::string soxe;
	unsigned long long doanhthu;
public:
	//nhom ham khoi tao
	cChuyenXe(std::string a = "", std::string b = "", std::string c = "", unsigned long long d = 0);
	
	//nhom ham set get
	void set_maso_chuyen(const std::string&);
	void set_hoten_taixe(const std::string&);
	void set_soxe(const std::string&);
	void set_doanhthu(const unsigned long long&);

	std::string get_maso_chuyen();
	std::string get_hoten_taixe();
	std::string get_soxe();
	unsigned long long get_doanhthu();
	
	//nhom ham xu ly
	virtual void Nhap();
	virtual void Xuat();

	//~cChuyenXe();
};

//so tuyen co the la ma so tuyen, co the la string ->consider