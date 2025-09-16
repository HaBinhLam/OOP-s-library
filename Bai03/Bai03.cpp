// MSSV: 24520063
// Họ tên: Nguyễn Ngọc Thu An
// Ngày sinh: 17/09/2006
// Lớp: IT002.P26.1
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct PS {
	int x, y;
};

void input(PS& a);
int ucln(int a, int b);
void rutgon(int& a, int& b);
void tong(const PS& a, const PS& b);
void hieu(const PS& a, const PS& b);
void tich(const PS& a, const PS& b);
void thuong(const PS& a, const PS& b);
void output(int a, int b);


int main()
{
	PS a, b;
	cout << "Nhap phan so thu nhat: ";
	input(a);
	cout << "Nhap phan so thu hai: ";
	input(b);

	tong(a, b);
	hieu(a, b);
	tich(a, b);
	thuong(a, b);
	return 0;

}

void input(PS& a) {
	cin >> a.x >> a.y;
	while (a.y == 0) {
		cout << "Phan so khong hop le, nhap lai: ";
		cin >> a.x >> a.y;
	}
	if (a.y < 0) {
		a.x = -a.x;
		a.y = -a.y;
	}
	rutgon(a.x, a.y);
}

int ucln(int a, int b) {
	a = abs(a);
	b = abs(b);
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void rutgon(int& a, int& b) {
	int z = ucln(a, b);
	a /= z;
	b /= z;
}

void output(int a, int b) {
	rutgon(a, b);
	if (a == 0) {
		cout << 0;
	}
	else if (b == 1) {
		cout << a;
	}
	else {
		cout << a << "/" << b;
	}
	cout << endl;

}

void tong(const PS& a, const PS& b) {
	int tuso = a.x * b.y + b.x * a.y;
	int mauso = a.y * b.y;
	cout << "Tong: ";
	
	output(tuso, mauso);
}


void hieu(const PS& a, const PS& b) {
	int tuso =  a.x * b.y - b.x * a.y ;
	int mauso = a.y * b.y;
	cout << "Hieu: ";
	
	output(tuso, mauso);
}

void tich(const PS& a, const PS& b) {
	int tuso = a.x * b.x;
	int mauso = a.y * b.y;
	cout << "Tich: ";
	
	output(tuso, mauso);
}

void thuong(const PS& a, const PS& b) {
	if (b.x == 0) {
		cout<< "Khong the chia cho 0\n";
		return;
	}
	int tuso = a.x * b.y;
	int mauso = a.y * b.x;
	cout << "Thuong: ";
	
	output(tuso, mauso);
}


