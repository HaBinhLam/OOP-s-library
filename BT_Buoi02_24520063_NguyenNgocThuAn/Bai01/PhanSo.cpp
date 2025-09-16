//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#include "PhanSo.h"
#include <iostream>

using namespace std;

int PhanSo::ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void PhanSo::rutgon() {
	int x = ucln(tuso, mauso);
	tuso /= x;
	mauso /= x;
	if (mauso < 0) {
		tuso = -tuso;
		mauso = -mauso;
	}
}

PhanSo::PhanSo(int tu , int mau ) : tuso(tu), mauso(mau) {}


int PhanSo :: getTu() const {
	return tuso;
}
int PhanSo :: getMau() const {
	return mauso;
}
void PhanSo::setTu(int tu) {
	tuso = tu;
}
void PhanSo::setMau(int mau) {
	mauso = mau;
}

void PhanSo::nhap() {
	cout << "Nhap tu so: ";
	cin >> tuso;
	do {
		cout << "Nhap mau so (khac 0): ";
		cin >> mauso;
		if (mauso == 0) cout << "Loi, mau so phai khac 0\n";
	} while (mauso == 0);
	rutgon();
}

void PhanSo::xuat() {
	if (tuso == 0 && mauso == 0) {
		cout << "phep chia khong hop le (tu so cua phan so thu hai bang 0)";
		return; 
	}
	rutgon();
	if (tuso == 0) {
		cout << 0;
	}
	else if (tuso % mauso == 0) {
		cout << tuso/mauso;
	}
	else {
		cout << tuso << "/" << mauso;
	}
}

PhanSo PhanSo::cong(const PhanSo& ps) const {
	return PhanSo(tuso * ps.mauso + ps.tuso * mauso, mauso * ps.mauso);
}

PhanSo PhanSo::tru(const PhanSo& ps) const {
	return PhanSo(tuso * ps.mauso - ps.tuso * mauso, mauso * ps.mauso);
}

PhanSo PhanSo::nhan(const PhanSo& ps) const {
	return PhanSo(tuso * ps.tuso, mauso * ps.mauso);
}

PhanSo PhanSo::chia(const PhanSo& ps) const {
	if (ps.tuso == 0) {
		return PhanSo(0, 0);
	}
	
	return PhanSo(tuso * ps.mauso, mauso * ps.tuso);

}
