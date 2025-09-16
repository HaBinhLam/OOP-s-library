//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#include "cThoiGian.h"
#include <iostream>

using namespace std;

void cThoiGian :: template_thoigian() {
	if (giay >= 60) {
		phut += giay / 60;
		giay %= 60;
	}
	if (phut >= 60) {
		gio += phut / 60;
		phut %= 60;
	}
}
	//nhom ham khoi tao
cThoiGian::cThoiGian(short hour , short min , int sec) : gio(hour), phut(min), giay(sec) {}

	//nhom ham get/set
short cThoiGian::getGio() const {
	return gio;
}
short cThoiGian::getPhut() const {
	return phut;
}
int cThoiGian::getGiay() const {
	return giay;
}

void cThoiGian::setGio(const short& hour) {
	gio += hour;
}
void cThoiGian::setPhut(const short& min) {
	phut += min;
	template_thoigian();
}
void cThoiGian::setGiay(const int& sec) {
	giay += sec;
	template_thoigian();
}

	//nhom ham xu ly
void cThoiGian::nhap() {
	do {
		cout << "Nhap gio (tu 0 -> 24): "; 
		cin >> gio;
		cout << "Nhap phut (tu 0 -> 60): ";
		cin >> phut;
		cout << "Nhap giay (tu 0 -> 60): ";
		cin >> giay;
		template_thoigian();
		if (gio > 24) {
			cout << "Gio khong hop le, nhap lai.\n";
		}
	} while (gio > 24);
	

}

void cThoiGian::xuat() const{
	cout << gio << " gio, " << phut << " phut, " << giay << " giay.";
}
void cThoiGian::giamthoigian(const cThoiGian& time2) {
	gio -= time2.gio;
	phut -= time2.phut;
	giay -= time2.giay;
	template_thoigian();
	if (gio < 0) {
		cout << "Sau khi giam, gio khong hop le.\n";
	}
	else {
		cout << "Thoi gian sau khi giam la: ";
		xuat();
	}
}
void cThoiGian::tangthoigian(const cThoiGian& time2) {
	gio += time2.gio;
	phut += time2.phut;
	giay += time2.giay;
	template_thoigian();
	if (gio > 24) {
		cout << "Sau khi tang, thoi gian khong hop le.\n";
	}
	else {
		cout << "Thoi gian sau khi tang la: ";
		xuat();
	}
}