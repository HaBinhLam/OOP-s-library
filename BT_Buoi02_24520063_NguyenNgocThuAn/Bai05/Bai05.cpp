//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#include "cdate.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	cdate date1, date2, date3;
	date1.nhap();
	
	cout << "Ngay da nhap: " << date1.getday() << endl;
	cout << "Thang da nhap: " << date1.getmonth() << endl;
	cout << "Nam da nhap: " << date1.getyear() << endl;

	cout << "Nhap ngay thang nam muon tang:\n";
	date2.nhap();
	cout << "Ngay thang nam sau khi tang la: ";
	date3 = date1.tang(date2);
	date3.tang_giam_ngaythangnam();
	date3.xuat();
	cout << endl;

	cout << "Nhap ngay thang nam muon giam:\n";
	date2.nhap();
	cout << "Ngay thang nam sau khi giam la: ";
	date3 = date1.giam(date2);
	date3.tang_giam_ngaythangnam();
	date3.xuat();
	cout << endl;

	cout << "Nam " << date1.getyear() << " la nam " << (date1.kiemtranamnhuan() ? "nhuan\n" : "khong nhuan\n");
	
	cout << "Thu trong tuan: ";
	date1.thutrongtuan();


	



}