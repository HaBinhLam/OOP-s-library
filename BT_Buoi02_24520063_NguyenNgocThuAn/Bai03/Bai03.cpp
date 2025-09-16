//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#include "cSophuc.h"
#include <iostream>

using namespace std;

int main() {
	cSophuc num1, num2;
	cout << "Nhap so phuc thu nhat\n";
	num1.nhap();
	cout << "Nhap so phuc thu hai\n";
	num2.nhap();

	cout << "Tong: ";
	num1.cong(num2).xuat();
	cout << "\nHieu: ";
	num1.tru(num2).xuat();
	cout << "\nTich: ";
	num1.nhan(num2).xuat();
	cout << "\nThuong: ";
	num1.chia(num2).xuat();


}