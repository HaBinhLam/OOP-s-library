//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cNhanVienVP.h"

cNhanVienVP::cNhanVienVP(string a, string b, cBirth c, double d) :ID(a), name(b), birth(c), salary(d) {}

//nhom ham set get
void cNhanVienVP::setID(const string& a) { ID = a; }
void cNhanVienVP::setname(const string& b) { name = b; }
void cNhanVienVP::setbirth(const cBirth& c) { birth = c; }
void cNhanVienVP::setsalary(const double& d) { salary = d; }

string cNhanVienVP::getID() { return ID; }
string cNhanVienVP::getname() { return name; }
cBirth cNhanVienVP::getbirth() { return birth; }
double cNhanVienVP::getsalary() { return salary; }

//nhom ham xu li
void cNhanVienVP::nhap_thongtin() {
	cout << "Nhap ma nhan vien: ";
	cin >> ID;
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, name);
	cout << "Nhap ngay thang nam sinh\n";
	birth.nhap_birth();
	cout << "Nhap luong ($): ";
	cin >> salary;
}
void cNhanVienVP::xuat_thongtin() {
	cout << "Ma nhan vien: " << ID << endl;
	cout << "Ho ten: " << name << endl;
	cout << "Ngay thang nam sinh: "; birth.xuat_birth(); cout << endl;
	cout << "Luong: " << setprecision(2) << fixed << salary << "$\n";
	
}
short cNhanVienVP::tinh_tuoi()const {
	short namsinh =  birth.getnam();
	return (short)2025 - namsinh;
}
