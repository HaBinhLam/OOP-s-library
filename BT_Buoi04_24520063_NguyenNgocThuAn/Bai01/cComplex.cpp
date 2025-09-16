//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include "cComplex.h"
cComplex::cComplex(double r, double i) :real(r), image(i) {}

double cComplex::getreal()const {
	return real;
}
double cComplex::getimage()const {
	return image;
}
void cComplex::setreal(const double& r) {
	real = r;
}
void cComplex::setimage(const double& i) {
	image = i;
}

cComplex cComplex :: operator+(const cComplex& sp) {
	return cComplex(real + sp.real, image + sp.image);
}
cComplex cComplex :: operator-(const cComplex& sp) {
	return cComplex(real - sp.real, image-sp.image);
}
cComplex cComplex :: operator*(const cComplex& sp) {
	return cComplex(real * sp.real - image * sp.image, real * sp.image + image * sp.real);
}
cComplex cComplex :: operator/(const cComplex& sp) {
	double denominator = sp.real * sp.real + sp.image * sp.image;
	return cComplex((real * sp.real + image * sp.image) / denominator, (image * sp.real - real * sp.image) / denominator);
}

bool cComplex :: operator==(const cComplex& sp) {
	return (real == sp.real && image == sp.image);
}
bool cComplex :: operator!=(const cComplex& sp) {
	return (real != sp.real || image != sp.image);
}

ostream& operator<<(ostream& out, const cComplex& a) {
	if (a.real == 0 && a.image == 0) {
		out << 0;
		return out;
	}
	if (a.real != 0)
		out << a.real;
	if (a.image > 0)
		if (a.image == 1) {
			out << " + i";
		}
		else
		out << " + " << a.image << "i";
	else if (a.image < 0)
		if (a.image == -1) {
			out << " - i";
		}
		else 
		out << " - " << -a.image << "i";
	return out;
}
istream& operator>>(istream& in, cComplex& a) {
	cout << "Nhap phan thuc: ";
	in >> a.real;
	cout << "Nhap phan ao: ";
	in >> a.image;
	return in;
}
bool cComplex::complex_bang0() {
	return (real == 0 && image == 0);
}