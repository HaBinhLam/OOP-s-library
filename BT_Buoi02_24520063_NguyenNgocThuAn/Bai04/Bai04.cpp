//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#include "cThoiGian.h"
#include <iostream>

using namespace std;

int main() {
	cThoiGian time1;
	time1.nhap();

	cout << "Thoi gian da nhap la: ";
	time1.xuat();
	cout << endl;

	cThoiGian time2;
	cout << "Nhap bien do thoi gian muon tang:\n";
	time2.nhap();
	time1.tangthoigian(time2);
	cout << "\nNhap bien do thoi gian muon giam:\n";
	time2.nhap();
	time1.giamthoigian(time2);





}