//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#include "cVehicle.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


cVehicle::cVehicle(string o , string t , double c, int x) :owner(o), type(t), cost(c), xylanh(x) {}

//nhom ham get/set
string cVehicle::getowner() {
	return owner;
}
string cVehicle::gettype() {
	return type;
}
double cVehicle::getcost() {
	return cost;
}
int cVehicle::getxylanh() {
	return xylanh;
}

void cVehicle::setowner(string name) {
	owner = name;
}
void cVehicle::settype(string name) {
	type = name;
}
void cVehicle::setcost(double money) {
	cost = money;
}
void cVehicle::setxylanh(int dungtich) {
	xylanh = dungtich;
}


//nhom ham xu li
void cVehicle::nhap() {
	cout << "Nhap ten chu xe: ";
	getline(cin, owner);
	cout << "Nhap loai xe: ";
	getline(cin, type);
	cout << "Nhap gia tri xe: ";
	cin >> cost;
	cout << "Nhap dung tich xylanh: ";
	cin >> xylanh;

}
void cVehicle::xuat() {
	cout << "Chu xe: " << owner << endl;
	cout << "Loai xe: " << type << endl;
	cout << "Gia tri xe: " << fixed << setprecision(3) << cost << endl;
	cout << "Dung tich xylanh: " << xylanh << " cc" << endl;
	cout << "Thue phai dong: " << tinh_thue() << endl;
}
double cVehicle::tinh_thue()const {
	if (xylanh < 100) {
		return cost * 0.01;
	}
	else if (xylanh <= 200) {
		return cost * 0.03;
	}
	else {
		return cost * 0.05;
	}
}
