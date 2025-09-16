//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cVanPhong.h"
using namespace std;
//nhom ham khoi tao
cVanPhong::cVanPhong(std::string a, cDate b, unsigned long long c, bool type, unsigned long long d) :cNhanVien(a, b, c, type), day_of_work(d) {}

//nhom ham set get
void cVanPhong::set_day_of_work(const unsigned long& a) {
	day_of_work = a;
}
unsigned long long cVanPhong::get_day_of_work() {
	return day_of_work;
}

//nhom ham xu ly
void cVanPhong::Nhap() {
	cNhanVien::Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> day_of_work;
	calculate_salary();

}
void cVanPhong::Xuat() {
	cNhanVien::Xuat();
	cout << "\nSo ngay lam viec: " << day_of_work;
	cout << "\nLuong: " << salary;

	return;
}
void cVanPhong::calculate_salary() {
	salary = day_of_work * 100000;
	return;
}