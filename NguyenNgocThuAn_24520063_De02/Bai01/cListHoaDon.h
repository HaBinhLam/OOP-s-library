#pragma once
#include <iostream>
#include <vector>
#include "cDoanhNghiep.h"
#include "cGiaDinh.h"
#include "cKhachHang.h"
#include "cDate.h"

class cListHoaDon
{
protected:
	std::vector<cKhachHang*>danhsach;

public:
	//nhom ham khoi tao
	cListHoaDon(int a = 0);
	~cListHoaDon();

	//nhom ham xu ly
	void nhap_danhsach(int);
	void xuat_danhsach();
	unsigned long long tinh_tong_tienthanhtoan();
	unsigned long long tiendien_nhieunhat_giadinh();
	void xuat_hogiadinh_tiendien_nhieunhat();
};

