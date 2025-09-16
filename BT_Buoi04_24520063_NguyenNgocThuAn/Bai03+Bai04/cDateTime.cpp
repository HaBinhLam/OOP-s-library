//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include "cDateTime.h"
using namespace std;

//nhom ham khoi tao
cDateTime::cDateTime(cDate a, cTime b) : calendar(a), clock(b) {}

//nhom ham get set
void cDateTime::set_calendar(const cDate& a) {
	calendar = a;
}
void cDateTime::set_clock(const cTime& b) {
	clock = b;
}
cDate cDateTime::get_calendar() {
	return calendar;
}
cTime cDateTime::get_clock() {
	return clock;
}

//nhom ham xu ly
void cDateTime::check_thoigian() {
	if (clock.get_sec() >= 60) {
		clock.set_min(clock.get_min() + (clock.get_sec() / 60));
		clock.set_sec(clock.get_sec() % 60);
	}
	if (clock.get_min() >= 60) {
		clock.set_hour(clock.get_hour() + (clock.get_min() / 60));
		clock.set_min(clock.get_min() % 60);
	}
	if (clock.get_hour() > 23) {
		int x = clock.get_hour() / 24;
		for (int i = 0; i < x; i++) {
			++calendar;
		}
		clock.set_hour(clock.get_hour() % 24);
	}
}

istream& operator>>(istream& in, cDateTime& a) {
	cout << "NHAP LICH.\n";
	in >> a.calendar;
	cout << "NHAP THOI GIAN.\n";
	in >> a.clock;
	a.check_thoigian();
	return in;
}
ostream& operator<<(ostream& out, const cDateTime& a) {
	out << "CLOCK: ";
	out << a.clock << endl;
	out << "CALENDAR: ";
	out<< a.calendar;
	return out;
}
cDateTime& cDateTime::operator++() {
	unsigned short x = clock.get_sec();
	unsigned short y = clock.get_min();
	unsigned short z = clock.get_hour();

	if(x==59){
		clock.set_sec(0);
		if (y == 59) {
			clock.set_min(0);
			if (z == 23) {
				clock.set_hour(0);
				++calendar;
			}
			else {
				clock.set_hour(clock.get_hour() + 1);
			}
		}
		else {
			clock.set_min(clock.get_min() + 1);
		}
	}
	else {
		clock.set_sec(clock.get_sec() + 1);
	}
	return *this;
}
cDateTime& cDateTime::operator--() {
	unsigned short x = clock.get_sec();
	unsigned short y = clock.get_min();
	unsigned short z = clock.get_hour();
	if (x == 0) {
		clock.set_sec(59);
		if (y == 0) {
			clock.set_min(59);
			if (z == 0) {
				clock.set_hour(23);
				--calendar;
			}
			else {
				clock.set_hour(clock.get_hour() - 1);
			}
		}
		else {
			clock.set_min(clock.get_min() - 1);
		}
	}
	else {
		clock.set_sec(clock.get_sec() - 1);
	}
	return *this;
}
