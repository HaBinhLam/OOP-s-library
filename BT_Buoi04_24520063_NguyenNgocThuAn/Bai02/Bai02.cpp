//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include <iostream>
#include "cFraction.h"

using namespace std;

int main()
{
	cFraction a, b, c;
	cout << "Nhap phan so thu nhat:\n";
	cin >> a;
	cout << "Nhap phan so thu hai:\n";
	cin >> b;

	cout << "\n------------------------";
	c = a + b;
	cout << "\nTong: " << c;
	
	c = a - b;
	cout << "\nHieu: " << c;

	c = a * b;
	cout << "\nTich: " << c;

	c = a / b;
	cout << "\nThuong: " << c;

	cout << "\n------------------------";
	cout << "\n(" << a << "<" << b << ")?:" << ((a < b) ? " TRUE\n" : " FALSE\n");
	cout << "\n(" << a << ">" << b << ")?:" << ((a > b) ? " TRUE\n" : " FALSE\n");
	cout << "\n(" << a << "==" << b << ")?:" << ((a == b) ? " TRUE\n" : " FALSE\n");
}