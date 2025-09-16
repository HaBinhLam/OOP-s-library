//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#include "toado.h"
#include  <iostream>

using namespace std;

double toado::gethoanh() const{
	return hoanhdo;
}
double toado::gettung() const {
	return tungdo;
}


void toado::sethoanh(const double& hoanh) {
	hoanhdo = hoanh;
}
void toado::settung(const double& tung) {
	tungdo = tung;
}

void toado::nhap() {
	cout << "Nhap hoanh do: ";
	cin >> hoanhdo;
	cout << "Nhap tung do: ";
	cin >> tungdo;
}
void toado::nhapvectortinhtien() {
	cout << "Nhap hoanh do tinh tien: ";
	cin >> hoanhdo;
	cout << "Nhap tung do tinh tien: ";
	cin >> tungdo;
}

void toado::xuat() const {
	cout << "(" << hoanhdo << ", " << tungdo << ")";
}
toado toado::tinhtien(const toado& d1) const {
	return toado(hoanhdo + d1.hoanhdo, tungdo + d1.tungdo);
}
