//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cDonThuc.h"
#include <iostream>
#include <cmath>
using namespace std;
	
//nhom ham khoi tao
cDonThuc::cDonThuc(double h, int b) :heso(h), bac(b) {}

//nhom ham set get
void cDonThuc::setheso(double& h) {
	heso = h;
}

void cDonThuc::setbac(int& b) {
	bac = b;
}
	
double cDonThuc::getheso() {
	return heso;
}

int cDonThuc::getbac() {
	return bac;
}


	//nhom ham xu li
void cDonThuc::nhap_donthuc() {
	cout << "Nhap he so: ";
	cin >> heso;
	cout << "Nhap bac: ";
	cin >> bac;

}
void cDonThuc::xuat_donthuc()const {
	if (heso != 0) {
		cout << (heso < 0 ? "- " : (bac != 0 ? "+ " : (heso > 0) ? "+ " : "- "));
		cout << abs(heso);
		if (bac > 0) cout << "x^" << bac << " ";
	}
}
double cDonThuc::tinh_giatri(double x)const {
	return heso * pow(x, bac);

}


