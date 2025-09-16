//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#include "PhanSo.h"
#include <iostream>

using namespace std;

int main()
{
	PhanSo ps1, ps2;
	cout << "Nhap phan so thu nhat\n";
	ps1.nhap();
	cout << "Nhap phan so thu hai\n";
	ps2.nhap();

	
	cout << endl<<"Ket qua cac phep toan:\n";
	cout << "Tong: ";
	ps1.cong(ps2).xuat();
	cout << endl;
	cout << "Hieu: ";
	ps1.tru(ps2).xuat();
	cout << endl;
	cout << "Tich: ";
	ps1.nhan(ps2).xuat();
	cout << endl;
	cout << "Thuong: ";
	ps1.chia(ps2).xuat();


	return 0;
}