//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cPhanSo.h"
#include <iostream>

using namespace std;

int cPhanSo::gcd(int a, int b) {
	a = abs(a);
	b = abs(b);
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void cPhanSo::rutgon() {
	int ucln = gcd(tuso, mauso);
	tuso /= ucln;
	mauso /= ucln;
	if (mauso < 0) {
		tuso = -tuso;
		mauso = -mauso;
	}

}

//nhom ham khoi tao
cPhanSo::cPhanSo(int tu , int mau ) : tuso(tu), mauso(mau) {}

//nhom ham set/get
void cPhanSo::settu(const int& a) {
	tuso = a;
}
void cPhanSo::setmau(const int& a) {
	mauso = a;
}
int cPhanSo::gettu() {
	return tuso;
}
int cPhanSo::getmau() {
	return mauso;
	}


//nhom ham xu li
void cPhanSo::nhap_phanso() {
	cout << "Nhap tu so: ";
	cin >> tuso;
	do {
		cout << "Nhap mau so: ";
		cin >> mauso;
		if (mauso == 0) {
			cout << "Mau so khong hop le, nhap lai.\n";
		}
	} while (mauso == 0);
}
void cPhanSo::xuat_phanso()const {
	if (tuso % mauso == 0) {
		cout << tuso / mauso << " ";
	}
	else {
		cout << tuso << "/" << mauso << " ";
	}
}

double cPhanSo::giatrithuc()const {
	return (double)tuso / mauso;
}
	
bool cPhanSo::songuyento(int n) const {
	if (n <= 1) return 0;
	else if (n == 2) return 1;
	else {
		for (int i= 2; i <= sqrt(n); i++) {
			if (n % i == 0) return 0;
		}
		return 1;
	}
}
bool cPhanSo::tuso_lasonguyento()const {
	if (songuyento(tuso)) {
		return 1;
	}
	return 0;
}

cPhanSo cPhanSo:: operator+(const cPhanSo& p) const {
	cPhanSo moi;
	moi.tuso = tuso * p.mauso + p.tuso * mauso;
	moi.mauso= mauso * p.mauso;
	moi.rutgon();
	return moi;

}

bool cPhanSo :: operator>(const cPhanSo& p) const {
	return giatrithuc() > p.giatrithuc();
}
bool cPhanSo::operator<(const cPhanSo& p)const {
	return giatrithuc() < p.giatrithuc();
}
