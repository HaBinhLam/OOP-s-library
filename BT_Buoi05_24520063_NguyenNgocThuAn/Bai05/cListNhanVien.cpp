//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1
#include "cListNhanVien.h"
using namespace std;

//nhom ham khoi tao
cListNhanVien::cListNhanVien(int a, int b) {
	list_sanxuat.resize(a);
	list_vanphong.resize(b);
}

//nhom ham set get
void cListNhanVien::set_size_list_sx(const int& a) {
	list_sanxuat.resize(a);
}
void cListNhanVien::set_size_list_vp(const int& b) {
	list_vanphong.resize(b);
}

int cListNhanVien::get_size_list_sx() {
	return (int)list_sanxuat.size();
}
int cListNhanVien::get_size_list_vp() {
	return (int)list_vanphong.size();
}

//nhom ham xu ly
void cListNhanVien::Nhap() {
	cout << "\n---NHAP DANH SACH NHAN VIEN SAN XUAT---\n";
	cout << "\nNhap so luong nhan vien san xuat: ";
	int n;
	cin >> n;
	set_size_list_sx(n);


	for (size_t i = 0; i < list_sanxuat.size(); i++) {
		cout << "\nNhan vien san xuat thu " << i + 1 << endl;
		list_sanxuat[i].Nhap();
		cout << endl;
	}

	cout << "\n---NHAP DANH SACH NHAN VIEN VAN PHONG---\n";
	cout << "\n\nNhap so luong nhan vien van phong: ";
	cin >> n;
	set_size_list_vp(n);

	for (size_t i = 0; i < list_vanphong.size(); i++) {
		cout << "\nNhan vien van phong thu " << i + 1 << endl;
		list_vanphong[i].Nhap();
		cout << endl;
	}
	
	return;
}
void cListNhanVien::Xuat() {
	cout << "\n---DANH SACH NHAN VIEN SAN XUAT---\n";
	for (size_t i = 0; i < list_sanxuat.size(); i++) {
		cout << "\nNhan vien san xuat thu " << i + 1 << endl;
		list_sanxuat[i].Xuat();
		cout << endl;
	}

	cout << "\n---DANH SACH NHAN VIEN VAN PHONG---\n";
	for (size_t i = 0; i < list_vanphong.size(); i++) {
		cout << "\nNhan vien van phong thu " << i + 1 << endl;
		list_vanphong[i].Xuat();
		cout << endl;
	}

	return;
}
unsigned long long cListNhanVien::tong_luong_nhanvien() {
	unsigned long long total = 0;
	for (size_t i = 0; i < list_sanxuat.size(); i++) {
		total += list_sanxuat[i].get_salary();
	}

	for (size_t i = 0; i < list_vanphong.size(); i++) {
		total += list_vanphong[i].get_salary();
	}

	return total;
}
