//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include "cFraction.h"


int cFraction::gcd(int a, int b) {
	a = abs(a);
	b = abs(b);
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void cFraction::simplify() {
	int x = gcd(numerator, denominator);
	numerator /= x;
	denominator /= x;
	if (numerator < 0) {
		numerator = -numerator;
		denominator = -denominator;
	}
}
cFraction::cFraction(int num, int den) : numerator(num), denominator(den) {}


int cFraction::gettu()const {
	return numerator;
}

int cFraction::getmau()const {
	return denominator;
}

void cFraction::settu(const int& n) {
	numerator = n;
}

void cFraction::setmau(const int& d) {
	denominator = d;
}

cFraction cFraction :: operator+(const cFraction& ps) {
	cFraction cur;
	cur.denominator = denominator * ps.denominator;
	cur.numerator = numerator * ps.denominator + denominator * ps.numerator;
	return cur;

}
cFraction cFraction ::operator-(const cFraction& ps) {
	cFraction cur;
	cur.denominator = denominator * ps.denominator;
	cur.numerator = numerator * ps.denominator - denominator * ps.numerator;
	return cur;
}
cFraction cFraction :: operator*(const cFraction& ps) {
	return cFraction (numerator * ps.numerator, denominator * ps.denominator);
}
cFraction cFraction :: operator/(const cFraction& ps) {
	if (ps.numerator == 0) {
		return cFraction(0, 0);
	}
	return cFraction(numerator * ps.denominator, denominator * ps.numerator);
}

bool cFraction :: operator==(const cFraction& ps) {
	return (numerator * ps.denominator == denominator * ps.numerator);
}
bool cFraction :: operator>(const cFraction& ps) {
	return ((float)(numerator/denominator) > (float)(ps.numerator/ps.denominator));
}
bool cFraction :: operator<(const cFraction& ps) {
	return ((float)(numerator / denominator) < (float)(ps.numerator / ps.denominator));
}

ostream& operator<<(ostream& out, cFraction& ps) {
	if (ps.numerator == 0 && ps.denominator == 0) {
		out << "Phep chia khong hop le";
		return out;
	}
	else
	{
		ps.simplify();
		if (ps.numerator % ps.denominator == 0) {
			out << ps.numerator / ps.denominator;
		}
		else {
			out << ps.numerator << "/" << ps.denominator;
		}
		return out;
	}

}
istream& operator>>(istream& in, cFraction& ps) {
	cout << "Nhap tu so: ";
	in >> ps.numerator;

	do{
		cout << "Nhap mau so (khac 0): ";
		in >> ps.denominator;
		if (ps.denominator == 0) {
			cout << "Loi, mau so phai khac 0, nhap lai.\n";
		}
	} while (ps.denominator == 0);

	return in;
}

