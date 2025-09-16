//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include <string>
class cKhachHang
{
protected:
	std::string name;
	unsigned int soluong_hang;
	double dongia_hang;
public:
	//nhom ham khoi tao
	cKhachHang(std::string a = "", unsigned int b = 0, double c = 0);

	//nhom ham set get
	void set_name(const std::string&);
	void set_soluong_hang(const unsigned int&);
	void set_dongia_hang(const double&);

	std::string get_name();
	unsigned int get_soluong_hang();
	double get_dongia_hang();

	//nhom ham xu li
	virtual void Nhap();
	virtual void Xuat();
	virtual double tinh_tien_phai_tra() = 0;



};

