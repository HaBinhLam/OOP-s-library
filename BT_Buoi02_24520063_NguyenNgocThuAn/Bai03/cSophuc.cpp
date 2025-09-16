//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#include "cSophuc.h"
#include <iostream>

using namespace std;

//nhom ham khoi tao
cSophuc::cSophuc(double real , double image) : thuc(real), ao(image) {}

double cSophuc::getthuc() {
	return thuc;
}
double cSophuc::getao() {
	return ao;
}

void cSophuc::setthuc(const double& real) {
	thuc = real;
}
void cSophuc::setao(const double& image) {
	ao = image;
}

//nhom ham xu ly
void cSophuc::nhap() {
	cout << "Nhap phan thuc cua so phuc: ";
	cin >> thuc;
	cout << "Nhap phan ao cua so phuc: ";
	cin >> ao;
}
void cSophuc::xuat() const {
	if (thuc == 0 && ao == 0) {
		cout << 0;
		return;
	}
	if(thuc!=0)
		cout << thuc ;
	if (ao > 0) {
		cout << " + " << ao << "i";
	}
	else if (ao < 0) {
		cout << " - " << -ao << "i";
	}
	else {
		return;
	}
}

cSophuc cSophuc::cong(const cSophuc& complex) const {
	return cSophuc(thuc + complex.thuc, ao + complex.ao);
}
cSophuc cSophuc::tru(const cSophuc& complex) const {
	return cSophuc(thuc - complex.thuc, ao - complex.ao);
}
cSophuc cSophuc::nhan(const cSophuc& complex) const {
	return cSophuc(thuc * complex.thuc - ao * complex.ao, thuc * complex.ao + ao * complex.thuc);
}
cSophuc cSophuc::chia(const cSophuc& complex) const {
	return cSophuc((thuc * complex.thuc + ao * complex.ao) / (complex.thuc * complex.thuc + complex.ao * complex.ao), (complex.thuc * ao - thuc * complex.ao) / (complex.thuc * complex.thuc + complex.ao * complex.ao));
}
