//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cListNhanVien.h"

using namespace std;

cListNhanVien::cListNhanVien(int a) {
	list.resize(a);
}

cListNhanVien::~cListNhanVien() {
	for (cNhanVien* nhanvien : list) {
		delete nhanvien;
	}
}

void cListNhanVien::nhap_danhsach() {
	cout << "\n---NHAP DANH SACH NHAN VIEN---\n";
	cout << "\nNhap so luong nhan vien: ";
	int a;
	cin >> a;

	for (int i = 0; i < a; i++) {
		bool type = 0; 
		cout << "\nNhap '1' neu la nhan vien van phong, '0' neu la nhan vien san xuat: ";
		cin >> type;

		cNhanVien* nhanvien = nullptr;

		if (type == 1) {
			nhanvien = new cVanPhong();
		}
		else {
			nhanvien = new cSanXuat();
		}
			nhanvien->Nhap();
			nhanvien->set_vanphong(type);
			list.push_back(nhanvien);
		

	}
}
void cListNhanVien::xuat_danhsach() {
	cout << "\n---XUAT DANH SACH NHAN VIEN---\n";
	int index = 1;
	for (cNhanVien* nhanvien : list) {
		cout << index++ << ".\n";
		if (nhanvien->get_vanphong() == 1) {
			cout << "Nhan vien van phong.";
		}
		else {
			cout << "Nhan vien san xuat.";
		}
		nhanvien->Xuat();
		cout << endl;
	}
	return;
}
unsigned long long cListNhanVien::total_salary() {
	unsigned long long total = 0;
	for (cNhanVien* nhanvien : list) {
		total += nhanvien->get_salary();
	}
	return total;
}
unsigned long long cListNhanVien::sanxuat_salary_lowest() {
	bool allowed = 0;
	unsigned long long lowest = 1000000000000000;
	for (cNhanVien* nhanvien : list) {
		if (nhanvien->get_vanphong() == 0) {
			allowed = 1;
			if (nhanvien->get_salary() < lowest)
				lowest = nhanvien->get_salary();
		}
	}
	if (allowed == 0) {
		return 0;
	}
	return lowest;
}

void cListNhanVien::xuat_tong_luong_cty_tra() {
	cout << "\n---TONG LUONG CONG TY PHAI TRA CHO NHAN VIEN---\n";
	cout << total_salary();
	return;
}

void cListNhanVien::xuat_sanxuat_salary_lowest() {
	cout << "\n---NHAN VIEN SAN XUAT CO LUONG THAP NHAT---\n";
	unsigned long long lowest = sanxuat_salary_lowest();
	if (lowest == 0) {
		cout << "\nKhong co nhan vien san xuat nao trong danh sach.\n";
	}
	else {
		int index = 1;
		for (cNhanVien* nhanvien : list) {
			if (nhanvien->get_vanphong() == 0 && nhanvien->get_salary() == lowest) {
				cout << index++ << ".";
				nhanvien->Xuat();
				cout << endl;
			}
		}
	}
}
unsigned short cListNhanVien::vanphong_oldest() {
	unsigned short oldest = 2025;
	bool allowed = 0;
	for (cNhanVien* nhanvien : list) {
		if (nhanvien->get_vanphong() == 1) {
			allowed = 1;
			if (nhanvien->get_birthday().get_year() < oldest)
				oldest = nhanvien->get_birthday().get_year();
		}
	}
	if (allowed == 0) {
		return 0;
	}
	else {
		return oldest;
	}
}
void cListNhanVien::xuat_vanphong_oldest() {
	cout << "\n---NHAN VIEN VAN PHONG CO TUOI CAO NHAT---\n";
	unsigned short oldest = vanphong_oldest();
	if (oldest == 0) {
		cout << "\nKhong co nhan vien van phong nao trong danh sach.\n";
	}
	else {
		int index = 1;
		for (cNhanVien* nhanvien : list) {
			if (nhanvien->get_vanphong() == 1 && nhanvien->get_birthday().get_year() == oldest) {
				cout << index++ << ".";
				nhanvien->Xuat();
				cout << endl;
			}
		}
	}
}
