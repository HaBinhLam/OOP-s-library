//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1
#pragma once
#include <iostream>
#include <string>

class cSinhVien
{
protected:
	std::string mssv;
	std::string hoten;
	std::string diachi;
	unsigned short tong_tinchi;
	float diem_trungbinh;
public:
	//nhom ham khoi tao
	cSinhVien(std::string a = "", std::string b = "", std::string c = "", unsigned short d = 0, float e = 0);

	//nhom ham set get
	void set_mssv(const std::string&);
	void set_hoten(const std::string&);
	void set_diachi(const std::string&);
	void set_tong_tinchi(const unsigned short&);
	void set_diem_trungbinh(const float&);

	std::string get_mssv();
	std::string get_hoten();
	std::string get_diachi();
	unsigned short get_tong_tinchi();
	float get_diem_trungbinh();

	//nhom ham xu ly
	void Nhap();
	void Xuat();


};

