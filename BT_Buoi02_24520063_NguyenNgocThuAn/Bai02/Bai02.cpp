//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#include "toado.h"
#include <iostream>

using namespace std;

int main() {
	toado d1, d2;
	d1.nhap();
	cout << "Diem da nhap: ";
	d1.xuat();
	cout << endl;
	cout << "Hoanh do diem da nhap: " << d1.gethoanh() << endl;
	cout << "Tung do diem da nhap: " << d1.gettung() << endl;
	
	d2.nhapvectortinhtien();
	cout << "Diem sau khi tinh tien la: ";
	d1.tinhtien(d2).xuat();

	return 0;
}