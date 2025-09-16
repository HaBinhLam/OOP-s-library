#include "cChuoi.h"
#include <iostream>

using namespace std;

int main()
{
	cChuoi s1, s2;
	cout << "Nhap chuoi 1\n";
	s1.nhap();
	cout << "Nhap chuoi 2\n";
	s2.nhap();

	cout << "Chuoi sau khi noi: ";
	s1.noi_chuoi(s2).xuat();
	cout << endl;

	cout << "Chuoi sau khi in hoa\n";
	cout << "Chuoi 1: "; s1.in_hoa().xuat();
	cout << "Chuoi 2: "; s2.in_hoa().xuat(); 
	cout << endl;

	cout << "Chuoi sau khi in thuong:\n";
	cout << "Chuoi 1: "; s1.in_thuong().xuat();
	cout << "Chuoi 2: "; s2.in_thuong().xuat(); 
	cout << endl;

	cout << "Chuoi sau khi dao\n";
	cout << "Chuoi 1: "; s1.dao_chuoi().xuat();
	cout << "Chuoi 2: "; s2.dao_chuoi().xuat(); 
	cout << endl;

	return 0;





}