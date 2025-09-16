//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#include "cdate.h"
#include <iostream>
#include <string>

using namespace std;

bool cdate::ngay_hople() {
	if ( month < 1 || month>12 || day < 1) return false;
	int ngay_trong_thang[] = { 0,31,kiemtranamnhuan() ? 29 : 28,31,30,31,31,30,31,30,31 };
	return day <= ngay_trong_thang[month];
}


cdate::cdate(short ngay , short thang , short nam) : day(ngay), month(thang), year(nam) {}

//nhom ham get set
short cdate::getday() {
	return day;
}
short cdate::getmonth() {
	return month;
}
short cdate::getyear() {
	return year;
}
void cdate::setday(short ngay) {
	day = ngay;
};
void cdate::setmonth(short thang) {
	month = thang;
}
void cdate::setyear(short nam) {
	year = nam;
}

//nhom ham xu ly

void cdate::nhap() {

	do {
		cout << "Nhap ngay (1->31): ";
		cin >> day;
		cout << "Nhap thang (1->12): ";
		cin >> month;
		cout << "Nhap nam: ";
		cin >> year;
		if ((kiemtranamnhuan() ? day > 29:day > 28) && month == 2) {
			cout << "Ngay thang nam khong hop le, vui long nhap lai.\n";
		}
		else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day > 31)) {
			cout << "Ngay thang nam khong hop le, vui long nhap lai.\n";
		}
		else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 30)) {
			cout << "Ngay thang nam khong hop le, vui long nhap lai.\n";
		}
		else if (month > 12) {
			cout << "Ngay thang nam khong hop le, vui long nhap lai.\n";
		}
	} while (((kiemtranamnhuan() ? day > 29:day > 28) && month == 2) || ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day > 31)) || ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 30))||(month>12));
}

void cdate::xuat_ngaythang(short x) const {
	if (x < 10 && x>0) {
		cout << 0 << x;
	}
	else {
		cout << x;
	}

}

void cdate::xuat() const {
	cout << "ngay ";
	xuat_ngaythang(day);
	cout << " thang ";
	xuat_ngaythang(month);
	cout<< " nam " << year;
}

void cdate::thutrongtuan() {
	string a = "";
	switch (getdayofweek())
	{
	case 0: a += "Thu Bay"; break;
	case 1: a += "Chu Nhat"; break;
	case 2: a += "Thu Hai"; break;
	case 3: a += "Thu Ba"; break;
	case 4: a += "Thu Tu"; break;
	case 5: a += "Thu Nam"; break;
	case 6: a += "Thu Sau"; break;
	}
	cout << a;
}

int cdate::getdayofweek() {
	short q = day;
	short y = year;
	short m = month;
	if (m == 1 || m == 2) {
		m += 12;
		y--;
	}
	short k = y % 100;
	short j = y / 100;
	return (q + (13 * (m + 1) / 5) + k + (k / 4) + (j / 4) + (5 * j)) % 7;
}

bool cdate::kiemtranamnhuan() {
	return (((year % 4 == 0 && year % 100 != 0)|| (year % 400 == 0)));
}

cdate cdate::tang(const cdate& date2) const {
	return cdate(day + date2.day, month + date2.month, year + date2.year);
}

cdate cdate::giam(const cdate& date2) const {
	return cdate(day - date2.day, month - date2.month, year - date2.year);
}

void cdate::tang_giam_ngaythangnam() {
	int ngay_trong_thang[] = { 0,31,kiemtranamnhuan() ? 29 : 28,31,30,31,31,30,31,30,31 };
	while (!ngay_hople()) {
		while (month < 1) {
			month += 12;
			year -= 1;
		}
		while (month > 12) {
			month -= 12;
			year += 1;
		}
		ngay_trong_thang[2] = kiemtranamnhuan() ? 29 : 28;

		while (day > ngay_trong_thang[month]) {
			day -= ngay_trong_thang[month];
			month += 1;
			if (month > 12) {
				month = 1;
				year += 1;
			}
			ngay_trong_thang[2] = kiemtranamnhuan() ? 29 : 28;
		}
		while (day <= 0) {
			month -= 1;
			if (month <= 0) {
				month = 12;
				year -= 1;
			}
			ngay_trong_thang[2] = kiemtranamnhuan() ? 29 : 28;
			day += ngay_trong_thang[month];
		}

	}
}





