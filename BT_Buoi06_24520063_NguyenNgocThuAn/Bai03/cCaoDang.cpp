//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cCaoDang.h"

using namespace std;


//nhom ham khoi tao
cCaoDang::cCaoDang(std::string a, std::string b, std::string c, unsigned short d, float e, bool f, float g) :cSinhVien(a, b, c, d, e, f), diem_totnghiep(g) {}

//nhom ham set get
void cCaoDang::set_diem_totnghiep(const float& a) {
	diem_totnghiep = a;
}
float cCaoDang::get_diem_totnghiep() {
	return diem_totnghiep;
}


//nhom ham xu ly
void cCaoDang::Nhap() {
	cSinhVien::Nhap();
	cout << "Nhap diem tot nghiep: ";
	cin >> diem_totnghiep;

	return;
}
void cCaoDang::Xuat() {
	cSinhVien::Xuat();
	cout << "\nDiem tot nghiep: " << diem_totnghiep;
}
bool cCaoDang::xettotnghiep() {
	if (tong_tinchi >= 120 && diemtrungbinh >= 5 && diem_totnghiep >= 5) {
		return 1;
	}
	return 0;
}

