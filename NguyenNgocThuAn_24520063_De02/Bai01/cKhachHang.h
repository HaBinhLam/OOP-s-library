#pragma once
#include <iostream>
#include <string>
#include "cDate.h"

class cKhachHang
{
protected:
	std::string ma_khachhang;
	std::string ten_khachhang;
	std::string dia_chi;
	float chiso_donghodien_old;
	float chiso_donghodien_new;
	unsigned long long sotien_thanhtoan;
	cDate ngay_phathanh_hoadon;
	bool doanh_nghiep;
public:
	//nhom ham khoi tao
	cKhachHang(std::string a = "", std::string b = "", std::string c = "", float d = 0, float e = 0, unsigned long long f = 0, cDate g = cDate(1, 1, 1), bool h = 0);

	//nhom ham set get
	void set_ma_khachhang(const std::string&);
	void set_ten_khachhang(const std::string&);
	void set_dia_chi(const std::string&);
	void set_chiso_donghodien_old(const float&);
	void set_chiso_donghodien_new(const float&);
	void set_sotien_thanhtoan(const unsigned long long&);
	void set_ngay_phathanh_hoadon(const cDate&);
	void set_doanhnghiep(const bool&);

	std::string get_ma_khachhang();
	std::string get_ten_khachhang();
	std::string get_dia_chi();
	float get_chiso_donghodien_old();
	float get_chiso_donghodien_new();
	unsigned long long get_sotien_thanhtoan();
	cDate get_ngay_phathanh_hoadon();
	bool get_doanhnghiep();

	//nhom ham xu li
	virtual unsigned long long tinh_tien_dien()=0;
	virtual void tinh_tien_thanhtoan() =0;
	void Nhap();
	void Xuat();



};

