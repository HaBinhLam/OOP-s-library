//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include <iostream>
#include <iomanip>
#include "cListCandidate.h"

using namespace std;

int main()
{
	cListCandidate a;
	a.nhap_danhsach();

	cout << "------------------------------------\n";
	cout << "\nDanh sach nhung thi sinh co tong diem lon hon 15:\n";
	a.xuat_tongdiemhon15();

	cout << "------------------------------------\n";
	cout << "\nThi sinh dat diem cao nhat la " << setprecision(2) << fixed << a.tim_diemcaonhat() << endl;
	a.xuat_diemcaonhat();

	cout << "------------------------------------\n";
	a.sapxep_giamdan();
	cout << "\nSap xep danh sach thi sinh giam dan theo tong diem:\n";
	a.xuat_danhsach();

	return 0;
}