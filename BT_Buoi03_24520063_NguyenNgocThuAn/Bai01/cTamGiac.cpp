//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cTamGiac.h"
using namespace std;

const double EPS = 1e-6;

cTamGiac::cTamGiac(cDiem a, cDiem b, cDiem c):A(a), B(b), C(c){}

cTamGiac::cTamGiac() {
	A = cDiem(0, 0);
	B = cDiem(1, 0);
	C = cDiem(0, 1);
}

void cTamGiac::nhap_tamgiac() {
	cout << "Nhap diem thu nhat\n";
	A.nhap_diem();
	cout << "Nhap diem thu hai\n";
	B.nhap_diem();
	cout << "Nhap diem thu ba\n";
	C.nhap_diem();
}

void cTamGiac::xuat_tamgiac() {
	cout << "3 diem trong tam giac lan luot la: ";
	A.xuat_diem();
	cout << " ; ";
	B.xuat_diem();
	cout << " ; ";
	C.xuat_diem();
	cout << endl;
}

bool cTamGiac::tamgiac_deu() {
	return(fabs(A.tinh_khoangcach(B) - B.tinh_khoangcach(C)) < EPS && fabs(A.tinh_khoangcach(B) - A.tinh_khoangcach(C)) < EPS);
}

bool cTamGiac::tamgiac_vuong() {
	double AB = A.tinh_khoangcach(B);
	double BC = B.tinh_khoangcach(C);
	double CA = C.tinh_khoangcach(A);

	double a2 = AB * AB, b2 = BC * BC, c2 = CA * CA;

	return (fabs(a2 + b2 - c2) < EPS || fabs(b2 + c2 - a2) < EPS || fabs(c2 + a2 - b2) < EPS);
}

bool cTamGiac::tamgiac_can() {
	return(fabs(A.tinh_khoangcach(B) - B.tinh_khoangcach(C)) < EPS || fabs(A.tinh_khoangcach(B) - A.tinh_khoangcach(C)) < EPS || fabs(B.tinh_khoangcach(C) == A.tinh_khoangcach(C)) < EPS);
}

void cTamGiac::xuat_loaitamgiac() {
	cout << "\nTam giac thuoc loai: TAM GIAC";
	if (tamgiac_deu() == 1) {
		cout << " DEU";
	}
	else if (tamgiac_vuong()) {
		cout << " VUONG";
		if (tamgiac_can()) {
			cout << " CAN";
		}
	}
	else if (tamgiac_can()) {
		cout << " CAN";
	}
	else {
		cout << " THUONG";
	}
}

double cTamGiac::tinh_chuvi() {
	return A.tinh_khoangcach(B) + B.tinh_khoangcach(C) + C.tinh_khoangcach(A);
}

double cTamGiac::tinh_dientich() {
	double nuachuvi = tinh_chuvi() / 2;
	return sqrt(nuachuvi * (nuachuvi - A.tinh_khoangcach(B)) * (nuachuvi - B.tinh_khoangcach(C)) * (nuachuvi - C.tinh_khoangcach(A)));
}

cTamGiac cTamGiac::tinhtien_tamgiac(const cDiem& d2) {
	return cTamGiac(A.tinhtien_diem(d2), B.tinhtien_diem(d2), C.tinhtien_diem(d2));
	
}

cTamGiac cTamGiac::quay_tamgiac(const double& goc) {
	return cTamGiac(A.quay_goc(goc), B.quay_goc(goc), C.quay_goc(goc));
}

cDiem cTamGiac::trong_tam() {
	return cDiem((A.gethoanh() + B.gethoanh() + C.gethoanh()) / 3, (A.gettung() + B.gettung() + C.gettung()) / 3);
}

cTamGiac cTamGiac::phongto_tamgiac(const double& k) {
	return cTamGiac(A.phongto_diem(trong_tam(), k), B.phongto_diem(trong_tam(), k), C.phongto_diem(trong_tam(), k));
}