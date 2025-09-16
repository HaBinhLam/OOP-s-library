//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include <iostream>
#include "cComplex.h"

using namespace std;

int main()
{
	cComplex a, b;
	cout << "So phuc thuc nhat\n";
	cin >> a;
	cout << "So phuc thu hai\n";
	cin >> b;

	
	cout << "\nTong: " << a + b;
	cout << "\nHieu: " << a - b;
	cout << "\nTich: " << a * b;
	cout << "\nThuong: ";
	if (b.complex_bang0())
		cout << "Phep chia khong hop le do so phuc thu hai co phan thuc va phan ao bang 0.\n";
	else
		cout << a / b << endl;


	if (a == b) {
		cout << "\nHai so phuc bang nhau.\n";
	}
	if (a != b) {
		cout << "\nHai so phuc khac nhau.\n";
	}
	cout << "\n\n\n";
	return 0;
}