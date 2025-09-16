//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include <iostream>
#include "cListSach.h"

using namespace std;

int main()
{
	cListSach danhsach;

	danhsach.Nhap();

	danhsach.Xuat();


	cout << "\nNhap nha xuat ban muon tim sach: ";
	string s;
	cin.ignore();
	getline(cin, s);
	danhsach.timsach(s);


	cout << "\n\n\n";
	return 0;
}