//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include "cDate.h"
using namespace std;

//nhom ham khoi tao
cDate::cDate(unsigned short d, unsigned short m, unsigned short y) :day(d), month(m), year(y) {}
//nhom ham set get
void cDate::set_day(const unsigned short& d) {
	day = d;
}
void cDate::set_month(const unsigned short& m) {
	month = m;
}
void cDate::set_year(const unsigned short& y) {
	year = y;
}

unsigned short cDate::get_day() {
	return day;
}
unsigned short cDate::get_month() {
	return  month;
}
unsigned short cDate::get_year() {
	return year;
}

//nhom ham xu li
bool cDate::nam_nhuan(unsigned short y) {
	return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

bool cDate::date_hople() {
	unsigned short thang[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	unsigned short ngay[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (year < 0 || month < 1 || month > 12 || day < 1) return 0;
	else {
		if (nam_nhuan(year)) ngay[1] = 29;
		else {
			if (ngay[month - 1] < day) return 0;
		}
	}
	return 1;

}

ostream& operator<<(ostream& out, cDate& a) {
	if (a.day < 10) {
		out << "0" << a.day << "/";
	}
	else out << a.day << "/";

	if (a.month < 10) {
		out << "0" << a.month << "/";
	}
	else out << a.month << "/";

	out << a.year;
	return out;

}
istream& operator>>(std::istream& in, cDate& a) {
	do {
		cout << "Nhap ngay: ";
		in >> a.day;
		cout << "Nhap thang: ";
		in >> a.month;
		cout << "Nhap nam: ";
		in >> a.year;
		if (!a.date_hople()) cout << "Ngay thang nam vua nhap khong hop le, vui long nhap lai.\n";
	} while (!a.date_hople());
	return in;
}

cDate cDate :: operator+(const int& z)
{
	unsigned short so_ngay_tang = z + day;
	unsigned short ngay[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	unsigned short x = month;
	unsigned short i = so_ngay_tang;
	for (; i > ngay[month - 1]; i -= ngay[x - 2])
	{
		if (nam_nhuan(year) == 1) ngay[1] = 29;
		month++;
		x = month;
		if (month == 13) {
			month = 1;
			year++;
			x = 13;
		}
	}
	day = i;
	return *this;


}
cDate cDate :: operator-(const int& z)
{
	unsigned short so_ngay_giam = abs(z);
	unsigned short ngay[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	so_ngay_giam -= day;
	month--;
	if (month == 0) {
		month = 12;
		year--;
	}
	unsigned short x = month;
	unsigned short i = so_ngay_giam;
		for (; i > ngay[month - 1]; i -= ngay[x]) {
			if (nam_nhuan(year) == 1) ngay[1] = 29;
			month--;
			x = month;
			if (month == 0) {
				month = 12;
				x = 0;
				year--;
			}

		}
	if (i == ngay[month - 1]) {
		month--;
		if (month == 0) {
			month = 12;
			year--;
			day = 31;
		}
		else {
			day = ngay[month - 1];
		}
	}
	else {
		day = ngay[month - 1] - i;
	}
	return *this;
}

cDate& cDate::operator++() {
	unsigned short ngay[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (nam_nhuan(year)) ngay[1] = 29;
	day++;
	if (day > ngay[month - 1]) {
		day = 1;
		month++;
		if (month > 12) {
			month = 1;
			year++;
		}
	}
	
	return *this;

}
cDate& cDate::operator--()
{
	unsigned short ngay[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (nam_nhuan(year)) ngay[1] = 29;
	day--;
	if (day == 0) {
		month--;
		if (month == 0) {
			month = 12;
			year--;
			day = 31;
		}
		else {
			day = ngay[month - 1];
		}
	}
	return *this;

}

unsigned int cDate::khoangcach_2date(const cDate& a) {
	unsigned short thang[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	unsigned short ngay[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	unsigned int kq = 0;

	if (a.year > year) {
		for (unsigned short i = a.year - 1; i > year; i--) {
			if (nam_nhuan(i)) kq += 366;
			else kq += 365;
		}
	}
	if (a.year < year) {
		for (unsigned short i = year - 1; i > a.year; i--) {
			if (nam_nhuan(i)) kq += 366;
			else kq += 365;
		}
	}
	if (a.year != year) {
		if (nam_nhuan(year)) ngay[1] = 29;
		else ngay[1] = 28;

		kq += ngay[month - 1] - day;
		for (unsigned short i = month; i < 12; i++) {
			kq += ngay[i];
		}

		if (nam_nhuan(a.year)) ngay[1] = 29;
		else ngay[1] = 28;

		for (unsigned short i = 0; i < a.month - 1; i++) {
			kq += ngay[i];
		}
		kq += a.day;
	}

	if (a.year == year) {
		if (nam_nhuan(year)) ngay[1] = 29;
		else ngay[1] = 28;

		if (month > a.month) {
			for (unsigned short i = a.month; i < month - 1; i++) {
				kq += ngay[i];
			}
			kq += ngay[month - 1] - day;
			kq += a.day;
		}
		else if (month < a.month) {
			for (unsigned short i = month; i < a.month - 1; i++) {
				kq += ngay[i];
			}
			kq += ngay[a.month - 1] - a.day;
			kq += day;
		}
		else {
			if (a.day > day)
				kq += a.day - day;
			else
				kq += day - a.day;
		}
	}
	return kq;


}
double cDate::laisuat_nganhang(const float& laisuat, const double& tiengui, const cDate& ngaygui) {
	unsigned short thang[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	unsigned short ngay[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	unsigned int distance = khoangcach_2date(ngaygui);
	return (laisuat / 365) * tiengui + tiengui;

}