//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cBirth.h"
#include <iostream>

using namespace std;

cBirth :: cBirth(short day, short month, short year) :ngay(day), thang(month), nam(year) {};

//nhom ham get set
void cBirth::setngay(short& day) {
	ngay = day;
}
void cBirth::setthang(short& month) {
	thang = month;
}
void cBirth::setnam(short& year) {
	nam = year;
}
short cBirth::getngay()const {
	return ngay;
}
short cBirth::getthang()const {
	return thang;
}
short cBirth::getnam()const {
	return nam;
}

//nhom ham xu li
bool cBirth::namnhuan()const {
	return ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0));
}

bool cBirth:: ngay_hople()const {
	if (ngay < 1 || thang < 1 || thang>12 || nam < 0) {
		return 0;
	}
	else {
		if (namnhuan()) {
			if (thang == 2 && ngay > 29) return 0;
		}
		else {
			if (thang == 2 && ngay > 28) return 0;
		}
		if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
			if (ngay > 31) return 0;
		}
		else {
			if (ngay > 30) return 0;
		}
	}
	return 1;
}

void cBirth::nhap_birth() {
	do {
		cout << "Nhap ngay sinh: ";
		cin >> ngay;
		cout << "Nhap thang sinh: ";
		cin >> thang;
		cout << "Nhap nam sinh: ";
		cin >> nam;
		if (!ngay_hople()) {
			cout << "Thong tin nhap khong hop le, vui long nhap lai.\n";
		}
	} while (!ngay_hople());
}

void cBirth::xuat_birth()const {
	if (ngay < 10) {
		cout << 0 << ngay;
	}
	else cout << ngay;
	cout << "/";
	if (thang < 10) {
		cout << 0 << thang;
	}
	else cout << thang;
	cout << "/";
	cout << nam;
}
