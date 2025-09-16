//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cDaGiac.h"
#include <iostream>

using namespace std;

//nhom ham khoi tao
cDaGiac::cDaGiac(int n) {
	if(n < 3) n=3;
	soDinh = n;
	dinh = new Diem[soDinh];

}
cDaGiac::~cDaGiac() {
	delete[]dinh;
}

//nhom ham set/get
void cDaGiac::setdinh(int& a) {
	if (a < 3) {
		cout << "Da giac can co it nhat la 3 dinh, mac dinh la 3\n";
		a = 3;
	}
	soDinh = a;
	if (dinh != nullptr) {
		delete[]dinh;
	}
	dinh = new Diem[soDinh];
	
}
int cDaGiac::getdinh() {
	return soDinh;
}


//nhom ham xu li
void cDaGiac::nhap_dagiac() {
	cout << "Nhap so dinh cua da giac (>=3): ";
	cin >> soDinh;
	if (soDinh < 3) soDinh = 3;
	delete[] dinh;
	dinh = new Diem[soDinh];

	for (int i = 0; i < soDinh; i++) {
		cout << "Nhap dinh thu " << i + 1 << "\n";
		dinh[i].nhap_diem();
	}
}

void cDaGiac :: xuat_dagiac()const {
	cout << "Da giac co cac dinh: ";
	for (int i = 0; i < soDinh; i++) {
		dinh[i].xuat_diem();
		if (i != soDinh - 1) cout << " - ";
	}
	cout << endl;
}
double cDaGiac::tinh_chuvi()const {
	double chuvi = 0;
	for (int i = 0; i < soDinh - 1; i++) {
		chuvi += dinh[i].tinh_khoangcach(dinh[i+1]);
	}
	chuvi += dinh[soDinh - 1].tinh_khoangcach(dinh[0]);
	return chuvi;
}

double cDaGiac :: tinh_dientich()const {
	double dientich = 0;
	for (int i = 0; i < soDinh; i++) {
		int j = (i + 1) % soDinh;
		dientich += (dinh[i].gethoanh() * dinh[j].gettung() - dinh[j].gethoanh() * dinh[i].gettung());
	}
	return fabs(dientich) / 2.0;

}

cDaGiac cDaGiac::tinhtien(const Diem& d2) {
	cDaGiac tinhtien_dagiac(soDinh);
	int index = 0;
	for (int i = 0; i < soDinh; i++) {
		tinhtien_dagiac.dinh[index++] = dinh[i].tinhtien_diem(d2);
	}
	return tinhtien_dagiac;
}
cDaGiac cDaGiac::quay(const double& goc) {
	cDaGiac quay_dagiac(soDinh);
	int index = 0;
	for (int i = 0; i < soDinh; i++) {
		quay_dagiac.dinh[index++] = dinh[i].quay_goc(goc);
	}
	return quay_dagiac;
}
Diem cDaGiac:: tinh_trongtam() const {
	double xSum = 0, ySum = 0;
	for (int i = 0; i < soDinh; i++) {
		xSum += dinh[i].gethoanh();
		ySum += dinh[i].gettung();
	}
	return Diem(xSum / soDinh, ySum / soDinh);
}
cDaGiac cDaGiac::phongto_thunho(const double& k) {
	cDaGiac tamgiac_moi(soDinh);
	Diem trongtam = tinh_trongtam();
	int index = 0;
	for (int i = 0; i < soDinh; i++) {
		tamgiac_moi.dinh[index++] = dinh[i].phongto_diem(trongtam, k);
	}
	return tamgiac_moi;
}
