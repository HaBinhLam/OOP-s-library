//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#include "cVehicle.h"
#include <iostream>

using namespace std;

int main()
{
	cVehicle xe1("Thu An", "Car", 500000000, 150);
	cVehicle xe2("Ha Binh Lam", "Motor", 15000000, 90);

	cVehicle xe3;
	xe3.nhap();

	//Bang thong tin xe va gia thue
	cout << "Bang thong tin xe va gia thue\n";
	xe1.xuat();
	cout << endl;
	xe2.xuat();
	cout << endl;
	xe3.xuat();
}