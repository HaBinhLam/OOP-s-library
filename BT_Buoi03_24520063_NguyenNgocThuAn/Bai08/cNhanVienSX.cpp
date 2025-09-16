//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cNhanVienSX.h"

cNhanVienSX::cNhanVienSX(string a, string b, cBirth c, int d, double e) :ID(a), name(b), birth(c), product(d), cost(e) {}

//nhom ham set get
void cNhanVienSX::setID(const string& a) { ID = a; }
void cNhanVienSX::setname(const string& b) { name = b; }
void cNhanVienSX::setbirth(const cBirth& c) { birth = c; }
void cNhanVienSX::setproduct(const int& d) { product = d; }
void cNhanVienSX::setcost(const double& e) { cost = e; }

string cNhanVienSX::getID() { return ID; }
string cNhanVienSX::getname() { return name; }
cBirth cNhanVienSX::getbirth() { return birth; }
int cNhanVienSX::getproduct() { return product; }
double cNhanVienSX::getcost() { return cost; }

//nhom ham xu li
void cNhanVienSX::nhap_thongtin() {
	cout << "Nhap ma nhan vien: ";
	cin >> ID;
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, name);
	cout << "Nhap ngay thang nam sinh\n";
	birth.nhap_birth();
	cout << "Nhap so san pham da gia cong: ";
	cin >> product;
	cout << "Nhap don gia mot san pham ($): ";
	cin >> cost;
}
void cNhanVienSX::xuat_thongtin() {
	cout << "Ma nhan vien: " << ID << endl;
	cout << "Ho ten: " << name << endl;
	cout << "Ngay thang nam sinh: "; birth.xuat_birth(); cout << endl;
	cout << "Luong san pham da gia cong: " << product << endl;
	cout << "Don gia 1 san pham: " << cost << endl;
}
double cNhanVienSX::tinh_luong()const {
	return product * cost;
}
short cNhanVienSX::tinh_tuoi()const {
	return (short)2025 - birth.getnam();
}
