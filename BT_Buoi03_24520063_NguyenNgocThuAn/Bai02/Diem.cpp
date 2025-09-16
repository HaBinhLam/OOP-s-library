//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "Diem.h"
#include <iostream>

using namespace std;

const double PI = 3.141592653589793;
 
Diem::Diem(double hoanh, double tung) : hoanhdo(hoanh), tungdo(tung) {}

//nhom ham set/get
void Diem::sethoanh(const double& a) {
	hoanhdo = a;
}
void Diem::settung(const double& a) {
	tungdo = a;
}
double Diem::gethoanh() {
	return hoanhdo;
}
double Diem::gettung() {
	return tungdo;
}


//nhom ham xu li
void Diem::nhap_diem() {
	cout << "Nhap hoanh do: ";
	cin >> hoanhdo;
	cout << "Nhap tung do: ";
	cin >> tungdo;

}
void Diem::xuat_diem()const {
	cout << "(" << hoanhdo << "," << tungdo << ")";
}
double Diem::tinh_khoangcach(const Diem& d2) {
	return sqrt(pow(d2.hoanhdo - hoanhdo, 2) + pow(d2.tungdo - tungdo, 2));
}
void  Diem::nhap_vectortinhtien() {
	cout << "\nNhap vector tinh tien\n";
	nhap_diem();
}
Diem Diem::tinhtien_diem(const Diem& d2) {
	return Diem(hoanhdo + d2.hoanhdo, tungdo + d2.tungdo);
}
Diem Diem :: quay_goc(const double& goc){
	double radian = goc * PI / 180.0;
	Diem goc_quay;
	goc_quay.hoanhdo = hoanhdo * cos(radian) - tungdo * sin(radian);
	goc_quay.tungdo = hoanhdo * sin(radian) + tungdo * cos(radian);
	return goc_quay;
}

Diem Diem::phongto_diem(const Diem& trongtam, const double& k) {
	Diem goc_phongto;
	goc_phongto.hoanhdo = trongtam.hoanhdo + k * (hoanhdo - trongtam.hoanhdo);
	goc_phongto.tungdo = trongtam.tungdo + k * (tungdo - trongtam.tungdo);
	return goc_phongto;
}