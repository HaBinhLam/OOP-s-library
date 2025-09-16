//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#pragma once
#include <iostream>
#include <string>
class cEmployee
{
protected:
	std::string ma_nhanvien;
	std::string hoten;
	unsigned short tuoi;
	std::string sdt;
	std::string email;
	unsigned long long luong_coban;
	unsigned long long luong;
	bool coder;
public:
	//nhom ham khoi tao
	cEmployee(std::string a = "", std::string b = "", unsigned short c = 0, std::string d = "", std::string e = "", unsigned long long f = 0, unsigned long long g = 0, bool h=0);

	//nhom ham set get
	void set_ma_nhanvien(const std::string&);
	void set_hoten(const std::string&);
	void set_tuoi(const unsigned short&);
	void set_sdt(const std::string&);
	void set_email(const std::string&);
	void set_luong_coban(const unsigned long long&);
	void set_luong(const unsigned long long&);
	void set_coder(const bool&);

	std::string get_ma_nhanvien();
	std::string get_hoten();
	unsigned short get_tuoi();
	std::string get_sdt();
	std::string get_email();
	unsigned long long get_luong_coban();
	unsigned long long get_luong();
	bool get_coder();


	//nhom ham xu li
	virtual void Nhap();
	virtual void Xuat();
	virtual void tinhtienluong() = 0;





};

