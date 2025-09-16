//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include <iostream>
#include <vector>
#include "cVector.h"

using namespace std;

int main()
{
	cout << "Nhap so chieu cua vector: ";
	int n;
	cin >> n;

	cVector a(n), b(n);
	cout << "Nhap vector thu nhat:\n";
	cin >> a;
	cout << "Nhap vector thu hai:\n";
	cin >> b;
	cout << "\n------------------------------------";
	cout << "\nDo dai vector thu nhat: " << a.tinh_dodai();
	cout << "\nDo dai vector thu hai: " << b.tinh_dodai();

	cout << "\n------------------------------------";
	cVector c = a + b;
	cout << "\nTong 2 vector: " << c;
	c = a - b;
	cout << "\nHieu 2 vector: " << c;

	if (a.get_sochieu() == b.get_sochieu()) {
		cout << "\nTich vo huong cua 2 vector: " << a.tich_vohuong(b);
	}
	
	cout << "\n------------------------------------";
	cout << "\nNhap gia tri muon nhan voi vector: ";
	double x;
	cin >> x;
	cout << "\nNhan vector thu nhat voi " << x << ": " << a * x;
	cout << "\nNhan vector thu hai voi " << x << ": " << b * x;

	cout << "\n\n\n";
	return 0;
}