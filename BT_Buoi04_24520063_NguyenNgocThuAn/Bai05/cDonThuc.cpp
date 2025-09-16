//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include "cDonThuc.h"

cDonThuc::cDonThuc(double h, int b) :heso(h), bac(b) {}

//nhom ham set get
void cDonThuc::setheso(double& h) {
	heso = h;
}
void cDonThuc::setbac(int& b) {
	bac = b;
}
double cDonThuc::getheso() {
	return heso;
}
int cDonThuc::getbac() {
	return bac;
}

//nhom ham xu li
istream& operator>>(istream& in, cDonThuc& a) {
	cout << "Nhap he so: ";
	in >> a.heso;
	cout << "Nhap bac: ";
	in >> a.bac;
	return in;
}

ostream& operator<<(ostream& out, const cDonThuc& a) {
	if (a.heso != 0) {
		out << (a.heso < 0 ? "- " : (a.bac != 0 ? "+ " : (a.heso > 0 ? "+ " : "- ")));
		if (abs(a.heso) != 1) {
			out << abs(a.heso);
		}
		if (a.bac > 0) {
			out << "x";
			if (a.bac > 1) {
				out << "^" << a.bac;
			}
		}
	}
	out << " ";
	return out;

}
double cDonThuc::tinh_giatri(double x)const {
	return heso * pow(x, bac);
}