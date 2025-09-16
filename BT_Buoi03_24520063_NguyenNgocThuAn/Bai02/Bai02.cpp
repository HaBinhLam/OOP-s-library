//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include <iostream>
#include "Diem.h"
#include "cDaGiac.h"
#include <iomanip>
using namespace std;

int main()
{
	cDaGiac dagiac;
	dagiac.nhap_dagiac();
	dagiac.xuat_dagiac();
	cout << setprecision(4) << fixed;

	cout << "\n------------------------------------\n";
	cout << "Chu vi da giac: " << dagiac.tinh_chuvi() << endl;
	cout << "Dien tich da giac: " << dagiac.tinh_dientich() << endl;

	cout << "\n------------------------------------\n";
	Diem tinhtien;
	tinhtien.nhap_vectortinhtien();

	cout << "\nDa giac sau khi tinh tien la:\n";
	dagiac.tinhtien(tinhtien).xuat_dagiac();

	cout << "\n------------------------------------\n";
	double goc;
	cout << "\nNhap goc muon quay (o->360): ";
	cin >> goc;
	cout << "Tam giac say khi quay:\n";
	dagiac.quay(goc).xuat_dagiac();
	
	cout << "\n------------------------------------\n";
	cout << "\nNhap ti le muon phong to / thu nho: ";
	cin >> goc;
	cout << "Tam giac sau khi ";
	cout << (goc >= 1.0 ? "phong to\n" : "thu nho\n");
	dagiac.phongto_thunho(goc).xuat_dagiac();



}