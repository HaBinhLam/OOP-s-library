//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cDiem.h"

using namespace std;

const double PI = 3.141592653589793;

cDiem::cDiem(double x, double y) : hoanhdo(x), tungdo(y) {}

//nhom ham set/get
void cDiem::sethoanh(double x) {
	hoanhdo = x;
}

void cDiem::settung(double y) {
	tungdo = y;
}

double cDiem::gettung() const {
	return tungdo;
}

double cDiem::gethoanh() const {
	return hoanhdo;
}

//nhom ham xu li
void cDiem::nhap_diem() {
	cout << "Nhap hoanh do: ";
	cin >> hoanhdo;
	cout << "Nhap tung do: ";
	cin >> tungdo;

}
void cDiem::xuat_diem()const {
	cout << "(" << hoanhdo << "," << tungdo << ")";
}

double cDiem::tinh_khoangcach(const cDiem& d2) {
	return sqrt(pow(d2.hoanhdo - hoanhdo, 2) + pow(d2.tungdo - tungdo, 2));
}

void cDiem::nhap_vectortinhtien() {
	cout << "\nNhap vector tinh tien\n";
	nhap_diem();
}

cDiem cDiem::tinhtien_diem(const cDiem& d2) {
	return cDiem (hoanhdo + d2.hoanhdo, tungdo + d2.tungdo);
}

cDiem cDiem::quay_goc(const double& goc) {
	double radian = goc * PI / 180.0;
	cDiem goc_quay;
	goc_quay.hoanhdo = hoanhdo * cos(radian) - tungdo * sin(radian);
	goc_quay.tungdo = hoanhdo * sin(radian) + tungdo * cos(radian);
	return goc_quay;
}

cDiem cDiem::phongto_diem(const cDiem& trongtam,const double& k) {
	cDiem goc_phongto;
	goc_phongto.hoanhdo = trongtam.hoanhdo + k * (hoanhdo - trongtam.hoanhdo);
	goc_phongto.tungdo = trongtam.tungdo + k * (tungdo - trongtam.tungdo);
	return goc_phongto;
}
