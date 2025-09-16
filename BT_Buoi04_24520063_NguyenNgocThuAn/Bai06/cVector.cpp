//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include "cVector.h"

using namespace std;

cVector::cVector(int n) :toado(n, 0) {}
cVector::cVector(const vector<double>& value) :toado(value) {}

int cVector::get_sochieu() const {
	return (int)toado.size();
}
void cVector::set_sochieu(const int& x) {
	toado.resize(x);
}

//nhom ham xu li
istream& operator>>(istream& in, cVector& a) {
	for (size_t i= 0; i < a.toado.size(); i++) {
		cout << "Nhap toa do chieu thu " << i + 1 << " : ";
		in >> a.toado[i];
	}
	return in;
}
ostream& operator<<(ostream& out, const cVector& a) {
	out << "(";
	for (size_t i = 0; i < a.toado.size(); i++) {
		out << a.toado[i];
		if (i != a.toado.size() - 1) out << ", ";
	}
	out << ")";
	return out;
}

cVector cVector::operator+(const cVector& a)const {
	cVector kq(toado.size());
	for (size_t i = 0; i < toado.size(); i++) {
		kq.toado[i] = toado[i] + a.toado[i];
	}
	return kq;
}
cVector cVector::operator-(const cVector& a)const {
	cVector kq(toado.size());
	for (size_t i = 0; i < toado.size(); i++) {
		kq.toado[i] = toado[i] - a.toado[i];
	}
	return kq;
}
cVector cVector::operator*(const double& x)const {
	cVector kq(toado.size());
	for (size_t i = 0; i < toado.size(); i++) {
		kq.toado[i] = toado[i] * x;
	}
	return kq;
}
double cVector::tich_vohuong(const cVector& a)const {
	double kq = 0.0;
	for (size_t i = 0; i < toado.size(); i++) {
		kq += toado[i] * a.toado[i];
	}
	return kq;
}
double cVector::tinh_dodai() {
	double kq = 0;
	for (auto& x : toado) {
		kq += x * x;
	}
	return sqrt(kq);
}