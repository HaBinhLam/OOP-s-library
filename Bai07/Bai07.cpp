// MSSV: 24520063
// Họ tên: Nguyễn Ngọc Thu An
// Ngày sinh: 17/09/2006
// Lớp: IT002.P26.1
#include <iostream>
#include <math.h>

using namespace std;

struct ngaythangnam {
	int day, month, year;
};

void input(ngaythangnam& a);
bool namnhuan(int n);
bool datehople(const ngaythangnam& a);
void xuat_ngaythang(int x);
void output(const ngaythangnam& a);


int main()
{
	ngaythangnam a;
	input(a);
	output(a);
	return 0;
}



void input(ngaythangnam& a) {
	do {
		cout << "Nhap ngay: ";
		cin >> a.day;
		cout << "Nhap thang: ";
		cin >> a.month;
		cout << "Nhap nam: ";
		cin >> a.year;
		if (datehople(a) == 0) {
			cout << "Ngay khong hop le, vui long nhap lai.\n";
		}
	} while (datehople(a) == 0);
}

bool namnhuan(int n) {
	if ((n % 4 == 0 && n % 100 != 0)||(n % 400 == 0)) {
		return 1;
	}
	return 0;
}

bool datehople(const ngaythangnam& a) {
	if (a.year < 0)		return 0;
	if (a.month < 1 || a.month > 12) return 0;
	if (a.day < 1) return 0;
	if (namnhuan(a.year)) {
		if (a.month == 2 && a.day > 29) return 0;
	}
	else {
		if (a.month == 2 && a.day > 28) return 0;
	}
	if (a.month == 1 || a.month == 3 || a.month == 5 || a.month == 7 || a.month == 8 || a.month == 10 || a.month == 12) {
		if (a.day > 31) return 0;
	}
	else if (a.month != 2) {
		if (a.day > 30) return 0;
	}
	return 1;

}

void xuat_ngaythang(int x) {
	if (x < 10 && x>0) {
		cout << 0 << x;
	}
	else {
		cout << x;
	}

}

void output(const ngaythangnam& a) {
	if (!datehople(a)) {
		cout << "Khong hop le\n";
	}
	else {
		cout << "Ngay ke tiep: ";
		if (a.month == 1 || a.month == 3 || a.month == 5 || a.month == 7 || a.month == 8 || a.month == 10 || a.month == 12) {
			if (a.day < 31) {
				xuat_ngaythang(a.day + 1);
				cout << "/";
				xuat_ngaythang(a.month);
				cout << "/";
				cout << a.year << "\n";
			}
			else {
				if (a.month == 12) {
					xuat_ngaythang(1);
					cout << "/";
					xuat_ngaythang(1);
					cout << "/";
					cout << a.year + 1 << "\n";
				}
				else {
					xuat_ngaythang(1);
					cout << "/";
					xuat_ngaythang(a.month + 1);
					cout << "/";
					cout << a.year << "\n";
				}
			}
		}
		else if (a.month == 2) {
			
			if (namnhuan(a.year) == 1) {
				if (a.day < 29) {
					xuat_ngaythang(a.day + 1);
					cout << "/";
					xuat_ngaythang(a.month);
					cout << "/";
					cout << a.year << "\n";
				}
				else if (a.day == 29) {
					xuat_ngaythang(1);
					cout << "/";
					xuat_ngaythang(3);
					cout << "/";
					cout << a.year << "\n";
				}
			}
			else {
				if (a.day < 28) {
					xuat_ngaythang(a.day + 1);
					cout << "/";
					xuat_ngaythang(a.month);
					cout << "/";
					cout << a.year << "\n";
				}
				else if (a.day == 28) {
					xuat_ngaythang(1);
					cout << "/";
					xuat_ngaythang(3);
					cout << "/";
					cout << a.year << "\n";
				}
			}
		}
		else {
			if (a.day < 30) {
				xuat_ngaythang(a.day + 1);
				cout << "/";
				xuat_ngaythang(a.month);
				cout << "/";
				cout << a.year << "\n";
			}
			else if (a.day == 30) {
				xuat_ngaythang(1);
				cout << "/";
				xuat_ngaythang(a.month + 1);
				cout << "/";
				cout << a.year << "\n";
			}
			
		}
	}
}
