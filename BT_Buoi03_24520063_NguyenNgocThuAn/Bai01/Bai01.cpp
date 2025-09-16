//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cTamGiac.h"
#include "cDiem.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cTamGiac hinh1;
	hinh1.nhap_tamgiac();

	cout << "\n------------------------------------\n";
	cout << "\nTam giac ban vua nhap la:\n";
	hinh1.xuat_tamgiac();

	cout << "\n------------------------------------\n";
	hinh1.xuat_loaitamgiac();

	cout << "\n------------------------------------\n";
	cout << "\nChu vi tam giac: " << setprecision(3) << fixed << hinh1.tinh_chuvi();
	cout << endl << "Dien tich tam giac: " << setprecision(3) << fixed << hinh1.tinh_dientich() << endl;

	cout << "\n------------------------------------\n";
	cDiem tinhtien;
	tinhtien.nhap_vectortinhtien();

	cout << "\n------------------------------------\n";
	cout << "\nTam giac sau khi tinh tien la:\n";
	hinh1.tinhtien_tamgiac(tinhtien).xuat_tamgiac();

	cout << "\n------------------------------------\n";
	double goc;
	cout << "\nNhap goc muon quay (0->360): ";
	cin >> goc;
	cout << "Tam giac sau khi quay:\n";
	hinh1.quay_tamgiac(goc).xuat_tamgiac();

	cout << "\n------------------------------------\n";
	cout << "\nNhap ti le muon phong to / thu nho: ";
	cin >> goc;
	cout << "Tam giac sau khi ";
	cout << (goc >= 1.0 ? "phong to\n" : "thu nho\n");
	hinh1.phongto_tamgiac(goc).xuat_tamgiac();
	

}