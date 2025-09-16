//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cNoiThanh.h"
using namespace std;

cNoiThanh::cNoiThanh(unsigned int a, unsigned int b) :sotuyen(a), km_diduoc(b) {}


//nhom ham set get
void cNoiThanh::set_sotuyen(const unsigned int& a) {
	sotuyen = a;
}
void cNoiThanh::set_km_diduoc(const unsigned int& b) {
	km_diduoc = b;
}

unsigned int cNoiThanh::get_sotuyen() {
	return sotuyen;
}
unsigned int cNoiThanh::get_km_diduoc() {
	return km_diduoc;
}

//nhom ham xu li
void cNoiThanh::Nhap() {
	cChuyenXe::Nhap();
	cout << "Nhap so tuyen (so nguyen): ";
	cin >> sotuyen;
	cout << "Nhap so km da di duoc: ";
	cin >> km_diduoc;

	return;
}
void cNoiThanh::Xuat() {
	cChuyenXe::Xuat();
	cout << "\nSo tuyen: " << sotuyen;
	cout << "\nSo km da di duoc: " << km_diduoc << endl;

	return;
}