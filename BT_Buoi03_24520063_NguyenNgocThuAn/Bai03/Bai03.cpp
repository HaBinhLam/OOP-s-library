//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include <iostream>
#include "cPhanSo.h"
#include "cDSPhanSo.h"

using namespace std;

int main()
{
	cDSPhanSo ds;
	ds.nhap_danhsach();
	cout << endl;
	ds.xuat_danhsach();
	cout << "\n------------------------------------\n";

	cout << "\nTong cac phan so trong day: ";
	ds.tinh_tong().xuat_phanso();
	cout << "\n------------------------------------\n";

	cout << "\nPhan so lon nhat trong day: ";
	ds.ps_lonnhat().xuat_phanso();

	cout << "\nPhan so nho nhat trong day: ";
	ds.ps_nhonhat().xuat_phanso();
	cout << "\n------------------------------------\n";

	int a = ds.ps_tusolasonguyento_lonnhat().gettu();
	if (a == 0) {
		cout << "\nTrong day khong co phan so co tu la so nguyen to.";
	}
	else {
		cout << "\nPhan so co tu la so nguyen to lon nhat: ";
		ds.ps_tusolasonguyento_lonnhat().xuat_phanso();
	}
	cout << "\n------------------------------------\n";

	cout << "\nSap xep tang dan";
	ds.sapxep_tang();
	ds.xuat_danhsach();
	cout << endl;

	cout << "\nSap xep giam dan";
	ds.sapxep_giam();
	ds.xuat_danhsach();
	cout << endl;


	return 0;
}