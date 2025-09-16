//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include <iostream>
#include "cDaThuc.h"
#include "cDonThuc.h"

using namespace std;

int main()
{
	cDaThuc a, b;
	
	cout << "Nhap da thuc thu nhat:\n";
	cin >> a;
	cout << "Nhap da thuc thu hai:\n";
	cin >> b;

	cout << "\n------------------------------------\n";
	cout << "Da thuc thu nhat: " << a;
	cout << "\nDa thuc thu hai: " << b;

	cout << "\n------------------------------------\n";
	cDaThuc tong = a + b;
	cout << "\nTong 2 da thuc: " << tong;

	cout << "\n------------------------------------\n";
	cDaThuc hieu = a - b;
	cout << "\nHieu 2 da thuc: " << hieu;

	cout << "\n------------------------------------\n";
	double x;
	cout << "\nNhap mot gia tri x de thay vao 2 da thuc: ";
	cin >> x;
	cout << "A(" << x << ") = " << a.tinh_giatri(x) << endl;
	cout << "B(" << x << ") = " << b.tinh_giatri(x) << endl;

	return 0;
}