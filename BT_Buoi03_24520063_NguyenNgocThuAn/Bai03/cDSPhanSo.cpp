//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cDSPhanSo.h"
#include "cPhanSo.h"
#include <iostream>
#include <algorithm>
using namespace std;


cDSPhanSo::cDSPhanSo() {
	ds = {};
}
void cDSPhanSo::nhap_danhsach() {
	cout << "Nhap so luong phan so: ";
	int n; cin >> n;
	ds.resize(n);
	for (int i = 0; i < n; i++) {
		cout << "\nPhan so thu " << i + 1 << "\n";
		ds[i].nhap_phanso();
	}
}

void cDSPhanSo::xuat_danhsach() const {
	cout << "\nDanh sach phan so:\n";
	for (int i = 0; i < ds.size(); i++) {
		ds[i].xuat_phanso();
	}
}

cPhanSo cDSPhanSo::tinh_tong() {
	cPhanSo tong;
	for (int i = 0; i < ds.size(); i++)
		tong = tong + ds[i];
	return tong;
}
cPhanSo cDSPhanSo::ps_lonnhat()const {
	cPhanSo lonnhat = ds[0];
	double giatri = ds[0].giatrithuc();
	for (int i = 1; i < ds.size(); i++) {
		if (ds[i].giatrithuc() > giatri) {
			giatri = ds[i].giatrithuc();
			lonnhat = ds[i];
		}
	}
	return lonnhat;
}

cPhanSo cDSPhanSo::ps_nhonhat()const {
	cPhanSo nhonhat = ds[0];
	double giatri = ds[0].giatrithuc();
	for (int i = 1; i < ds.size(); i++) {
		if (ds[i].giatrithuc() < giatri) {
			giatri = ds[i].giatrithuc();
			nhonhat = ds[i];
		}
	}
	return nhonhat;
}
cPhanSo cDSPhanSo::ps_tusolasonguyento_lonnhat()const {
	cPhanSo output(0,1);
	for (int i = 0; i < ds.size(); i++) {
		if (ds[i].tuso_lasonguyento() && ds[i].tuso > output.tuso) {
			output = ds[i];
		}
	}
	return output;
}

void cDSPhanSo::sapxep_tang() {
	sort(ds.begin(), ds.end(), [](const cPhanSo& a, const cPhanSo& b) {
		return a.giatrithuc() < b.giatrithuc();
		});
}
void cDSPhanSo::sapxep_giam() {
	sort(ds.begin(), ds.end(), [](const cPhanSo& a, const cPhanSo& b) {
		return a.giatrithuc() > b.giatrithuc();
		});

}
