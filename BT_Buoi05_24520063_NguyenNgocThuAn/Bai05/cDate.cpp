//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1
#include "cDate.h"


using namespace std;

cDate::cDate(unsigned short a, unsigned short b, unsigned short c) :day(a), month(b), year(c) {}

//nhom ham set get
void cDate::set_day(const unsigned short& a) {
	day = a;
}
void cDate::set_month(const unsigned short& b) {
	month = b;
}
void cDate::set_year(const unsigned short& c) {
	year = c;
}

unsigned short cDate::get_day() {
	return day;
}
unsigned short cDate::get_month() {
	return month;
}
unsigned short cDate::get_year() {
	return year;
}

//nhom ham xu ly
istream& operator>>(istream& in, cDate& a) {
	cout << "Nhap ngay: ";
	cin >> a.day;
	cout << "Nhap thang: ";
	cin >> a.month;
	cout << "Nhap nam: ";
	cin >> a.year;

	return in;
}
ostream& operator<<(ostream& out, const cDate& a) {
	if (a.day < 10) { out << "0" << a.day; }
	else { out << a.day; }

	if (a.month < 10) { out << "/0" << a.month; }
	else { out << "/" << a.month; }

	cout << "/" << a.year;

	return out;

}//ko khuyen khich dung operator cho ke thua, ma trong ke thua thi ham ban ko ke thua dc
