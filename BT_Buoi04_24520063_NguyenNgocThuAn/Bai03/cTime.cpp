//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include "cTime.h"
using namespace std;


cTime::cTime(unsigned short h, unsigned short m, unsigned short s) : hour(h), min(m), sec(s) {}

//nhom ham set get
void cTime::set_hour(const unsigned short& h) {
	hour = h;
}
void cTime::set_min(const unsigned short& m) {
	min = m;
}
void cTime::set_sec(const unsigned short& s) {
	sec = s;
}

unsigned short cTime::get_hour() {
	return hour;
}
unsigned short cTime::get_min() {
	return min;
}
unsigned short cTime::get_sec() {
	return sec;
}

//nhom ham xu ly

void cTime::check_thoigian() {
	if (sec >= 60) {
		min += (sec / 60);
		sec = sec % 60;
	}
	if (min >= 60) {
		hour += (min / 60);
		min = min % 60;
	}
	if (hour > 23) {
		hour = hour % 24;
	}
}

void cTime::check_giam(const int& x) {
	if (x > sec) {
		sec = 60 - ((x % 60) - sec);
		if (ceil(x / 60.0) > min) {
			int y = ceil(x / 60.0);
			min = 60 - ((y % 60) - min);
			if (ceil(x / 3600.0) > hour) {
				int z = ceil(x / 3600.0);
				hour = 24 - ((z % 24) - hour);
			}
			else {
				hour -= (x / 3600);
			}
		}
		else {
			min -= ceil(x / 60.0);
		}
	}
	else {
		sec -= x;
	}
}

ostream& operator<<(std::ostream& out, const cTime& t) {
	if (t.hour < 10) {
		out << "0" << t.hour << ":";
	}
	else {
		out << t.hour << ":";
	}
	if (t.min < 10) {
		out << "0" << t.min<<":";
	}
	else {
		out << t.min<<":";
	}
	if (t.sec < 10) {
		out << "0" << t.sec;
	}
	else {
		out << t.sec;
	}
	if (t.hour >= 12) {
		out << " PM";
	}
	else {
		out << " AM";
	}

	return out;
}
istream& operator>>(std::istream& in, cTime& t) {
	do {
		cout << "Nhap gio (>=0): ";
		in >> t.hour;
		if (t.hour < 0) {
			cout << "Gio khong hop le, nhap lai.\n";
		}
	} while (t.hour < 0);

	do {
		cout << "Nhap phut (>=0): ";
		in >> t.min;
		if (t.min < 0) {
			cout << "Phut khong hop le, nhap lai.\n";
		}
	} while (t.min < 0);

	do {
		cout << "Nhap giay (>=0): ";
		in >> t.sec;
		if (t.sec < 0) {
			cout << "Giay khong hop le, nhap lai.\n";
		}
	} while (t.sec < 0);
	t.check_thoigian();
	return in;
}

cTime cTime::operator+(const int& x) {
	sec += x;
	check_thoigian();
	return *this;
}
cTime cTime::operator-(const int& x) {
	check_giam(-x);
	return *this;
}
cTime& cTime::operator++() {
	sec++;
	check_thoigian();
	return *this;
}
cTime& cTime::operator--() {
	if (sec == 0) {
		sec = 59;
		if (min == 0) {
			min = 59;
			if (hour == 0) {
				hour = 23;
			}
		}
		else {
			min--;
		}
	}
	else {
		sec--;
	}
	return *this;
}