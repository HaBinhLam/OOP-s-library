#include <iostream>
#include "cListHoaDon.h"

using namespace std;

int main()
{
	cListHoaDon a;
	int soluong;
	
	cout << "\nNhap so luong hoa don: ";
	cin >> soluong;

	a.nhap_danhsach(soluong);

	a.xuat_danhsach();

	cout << "\nTong tien thanh toan cac ho da su dung trong thang 5 nam 2025 la: ";
	cout << a.tinh_tong_tienthanhtoan() << endl;

	a.xuat_hogiadinh_tiendien_nhieunhat();

	return 0;

}