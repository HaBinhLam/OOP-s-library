// MSSV: 24520063
// Họ tên: Nguyễn Ngọc Thu An
// Ngày sinh: 17/09/2006
// Lớp: IT002.P26.1
#include <iostream>
#include <math.h>

using namespace std;

struct lich {
	int day, month, year;
};

void input(lich& a);
bool datehople(const lich& a);
bool namnhuan(int n);
string day(int n);
void output(const lich& a);
void xuat_ngaythang(int x);

int main()
{
	lich a;
	input(a);
	output(a);

	return 0;
}

bool namnhuan(int n) {
	return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
}


void input(lich& a) {
	do{
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

bool datehople(const lich& a) {
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

string day(int n)
{
	string a="";
	switch (n)
	{
	case 0: a += "Thu Bay"; break;
	case 1: a += "Chu Nhat"; break;
	case 2: a += "Thu Hai"; break;
	case 3: a += "Thu Ba"; break;
	case 4: a += "Thu Tu"; break;
	case 5: a += "Thu Nam"; break;
	case 6: a += "Thu Sau"; break;
	}
	return a;
}

void xuat_ngaythang(int x) {
	if (x < 10 && x>0) {
		cout << 0 << x;
	}
	else {
		cout << x;
	}

}

void output(const lich& a) {
	int	q = a.day;
	int y = a.year;
	int m = a.month;
	if (m == 1 || m == 2) {
		m += 12;
		y--;
	}
	int k = y % 100;
	int j = y / 100;
	int h = (q + (13 * (m + 1) / 5) + k + (k / 4) + (j / 4) + (5 * j)) % 7;
	
	
	cout << "Ngay ";
	xuat_ngaythang(a.day);
	cout << "/";
	xuat_ngaythang(a.month);
	cout << "/" << a.year << " la " << day(h) << endl;
}
