//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cNgoaiThanh.h"

using namespace std;

cNgoaiThanh::cNgoaiThanh(string a, unsigned int b) :noiden(a), songay_diduoc(b) {}

//nhom ham set get
void cNgoaiThanh::set_noiden(const string& a) {
	noiden = a;
}
void cNgoaiThanh::set_songay_diduoc(const unsigned int& b) {
	songay_diduoc = b;
}
string cNgoaiThanh::get_noiden() {
	return noiden;
}
unsigned int cNgoaiThanh::get_songay_diduoc() {
	return songay_diduoc;
}

//nhom ham xu li
void cNgoaiThanh::Nhap() {
	cChuyenXe::Nhap();
	cin.ignore();
	cout << "Nhap noi den: ";
	getline(cin, noiden);
	cout << "Nhap so ngay di duoc: ";
	cin >> songay_diduoc;

	return;
}
void cNgoaiThanh::Xuat() {
	cChuyenXe::Xuat();
	cout << "\nNoi den: " << noiden;
	cout << "\nSo ngay di duoc: " << songay_diduoc << endl;

	return;
}