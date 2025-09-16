//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cDaThuc.h"
#include "cDonThuc.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//nhom ham khoi tap
//nhom ham set get
// nhom ham xu ly
void cDaThuc::nhap() {
	int n;
	cout << "Nhap so luong don thuc: ";
	cin >> n;
	ds.resize(n);
	for (int i = 0; i < n; i++) {
		cout << "Don thuc thu " << i + 1 << ":\n";
		ds[i].nhap_donthuc();
	}
}
void cDaThuc::xuat()const {
	if (ds.empty()) {
		cout << "0";
	}
	else {
		if (ds[0].heso != 0) cout << ds[0].heso;
		if (ds[0].bac != 0) {
			if (ds[0].bac == 0) { cout << ds[0].heso << " "; }
			else if (ds[0].bac > 0) cout << "x^" << ds[0].bac << " ";
		}
		for (int i = 1; i < ds.size(); i++) {
			ds[i].xuat_donthuc();
		}
	}
}
double cDaThuc::tinhgiatri(double x)const {
	double tong = 0;
	for (int i = 0; i < ds.size(); i++) {
		tong += ds[i].tinh_giatri(x);
	}
	return tong;
}
cDaThuc cDaThuc::operator+(cDaThuc& dathuc) {
	cDaThuc kq;
	for (int i = 0; i < ds.size(); i++){
		kq.ds.push_back(ds[i]);
	}
	for (int i = 0; i < dathuc.ds.size(); i++) {
		bool trung_bac = false;
		int bac_cantim = dathuc.ds[i].getbac();
		double heso_other = dathuc.ds[i].getheso();

		for (int j = 0; j < kq.ds.size(); j++) {
			if (kq.ds[j].getbac() == bac_cantim) {
				double tong = kq.ds[i].getheso() + heso_other;
				kq.ds[j].setheso(tong);
				trung_bac = true;
				break;
			}
		}

		if (!trung_bac) {
			kq.ds.push_back(dathuc.ds[i]);
		}
	}
	return kq;

}
cDaThuc cDaThuc::operator-(cDaThuc& dathuc) {
	cDaThuc kq;
	for (int i = 0; i < ds.size(); i++) {
		kq.ds.push_back(ds[i]);
	}
	for (int i = 0; i < dathuc.ds.size(); i++) {
		bool trung_bac = false;
		int bac_cantim = dathuc.ds[i].getbac();
		double heso_other = dathuc.ds[i].getheso();

		for (int j = 0; j < kq.ds.size(); j++) {
			if (kq.ds[j].getbac() == bac_cantim) {
				double hieu = kq.ds[i].getheso() - heso_other;
				kq.ds[j].setheso(hieu);
				trung_bac = true;
				break;
			}
		}

		if (!trung_bac) {
			cDonThuc moi(-heso_other, bac_cantim);
			kq.ds.push_back(moi);
		}
	}
	return kq;

}
