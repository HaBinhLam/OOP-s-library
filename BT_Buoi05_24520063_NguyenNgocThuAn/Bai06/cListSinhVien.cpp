//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1
#include "cListSinhVien.h"
using namespace std;

//nhom ham khoi tao
cListSinhVien::cListSinhVien(int a, int b) {
	list_sv_dh.resize(a);
	list_sv_cd.resize(b);
}

//nhom ham set get
void cListSinhVien::set_size_dh(const int& a) {
	list_sv_dh.resize(a);
}
void cListSinhVien::set_size_cd(const int& b) {
	list_sv_cd.resize(b);
}

int cListSinhVien::get_size_dh() {
	return (int)list_sv_dh.size();
}
int cListSinhVien::get_size_cd() {
	return (int)list_sv_cd.size();
}

//nhom ham xu li
void cListSinhVien::Nhap() {
	cout << "\n---NHAP DANH SACH SINH VIEN DAI HOC---\n";
	cout << "\nNhap so luong sinh vien dai hoc: ";
	int n;
	cin >> n;
	set_size_dh(n);
	for (size_t i = 0; i < list_sv_dh.size(); i++) {
		cout << "\nSinh vien dai hoc thu " << i + 1 << endl;
		list_sv_dh[i].Nhap();
		cout << endl;
	}

	cout << "\n---NHAP DANH SACH SINH VIEN CAO DANG---\n";
	cout << "\n\nNhap so luong sinh vien cao dang: ";
	cin >> n;
	set_size_cd(n);
	for (size_t i = 0; i < list_sv_cd.size(); i++) {
		cout << "\nNhan vien van phong thu " << i + 1 << endl;
		list_sv_cd[i].Nhap();
		cout << endl;
	}

	return;
}
void cListSinhVien::Xuat() {
	cout << "\n---DANH SACH SINH VIEN DAI HOC---\n";
	
	for (size_t i = 0; i < list_sv_dh.size(); i++) {
		cout << "\nSinh vien dai hoc thu " << i + 1 << endl;
		list_sv_dh[i].Xuat();
		cout << endl;
	}

	cout << "\n---DANH SACH SINH VIEN CAO DANG---\n";
	
	for (size_t i = 0; i < list_sv_cd.size(); i++) {
		cout << "\nSinh vien cao dang thu " << i + 1 << endl;
		list_sv_cd[i].Xuat();
		cout << endl;
	}

	return;
}
void cListSinhVien::xuat_sv_totnghiep() {
	bool print = 0;
	int index = 1;
	cout << "\n---DANH SACH SINH VIEN DAI HOC TOT NGHIEP---\n";
	
	for (size_t i = 0; i < list_sv_dh.size(); i++) {
		if (list_sv_dh[i].get_tong_tinchi() >= 145 && list_sv_dh[i].get_diem_trungbinh() >= 5 && list_sv_dh[i].get_diem_luanvan() >= 5) {
			cout << "\nSinh vien dai hoc thu " << index++ << endl;
			list_sv_dh[i].Xuat();
			cout << endl;
			print = 1;
		}
	}
	if (print == 0) {
		cout << "\nKhong sinh vien dai hoc nao tot nghiep.\n";
	}
	
	print = 0;
	index = 1;
	cout << "\n---DANH SACH SINH VIEN CAO DANG TOT NGHIEP---\n";
	for (size_t i = 0; i < list_sv_cd.size(); i++) {
		if (list_sv_cd[i].get_tong_tinchi() >= 110 && list_sv_cd[i].get_diem_trungbinh() >= 5 && list_sv_cd[i].get_diem_totnghiep() >= 5) {
			cout << "\nSinh vien cao dang thu " << index++ << endl;
			list_sv_cd[i].Xuat();
			cout << endl;
			print = 1;
		}
	}
	if (print == 0) {
		cout << "\nKhong sinh vien cao dang nao tot nghiep.\n";
	}

	return;
}
void cListSinhVien::xuat_sv_0totnghiep() {
	bool print = 0;
	int index = 1;
	cout << "\n---DANH SACH SINH VIEN DAI HOC KHONG DU DIEU KIEN TOT NGHIEP---\n";
	for (size_t i = 0; i < list_sv_dh.size(); i++) {
		if (list_sv_dh[i].get_tong_tinchi() < 145 || list_sv_dh[i].get_diem_trungbinh() < 5 || list_sv_dh[i].get_diem_luanvan() < 5) {
			cout << "\nSinh vien dai hoc thu " << index++ << endl;
			list_sv_dh[i].Xuat();
			cout << endl;
			print = 1;
		}
	}
	if (print == 0) {
		cout << "\nTat ca sinh vien dai hoc deu tot nghiep.\n";
	}

	print = 0;
	index = 1;
	cout << "\n---DANH SACH SINH VIEN CAO DANG KHONG DU DIEU KIEN TOT NGHIEP---\n";
	for (size_t i = 0; i < list_sv_cd.size(); i++) {
		if (list_sv_cd[i].get_tong_tinchi() < 110 || list_sv_cd[i].get_diem_trungbinh() < 5 || list_sv_cd[i].get_diem_totnghiep() < 5) {
			cout << "\nSinh vien cao dang thu " << index++ << endl;
			list_sv_cd[i].Xuat();
			cout << endl;
			print = 1;
		}
	}
	if (print == 0) {
		cout << "\nTat ca sinh vien cao dang deu tot nghiep.\n";
	}

	return;
}
float cListSinhVien::diem_tb_dh_highest() {
	float result = 0;
	for (size_t i = 0; i < list_sv_dh.size(); i++) {
		if (list_sv_dh[i].get_diem_trungbinh()>result) {
			result = list_sv_dh[i].get_diem_trungbinh();
		}
	}
	
	return result;
}
void cListSinhVien::xuat_sv_dh_diem_tb_highest() {
	float result = diem_tb_dh_highest();
	int index = 1;
	cout << "\n-----------------------------\n";
	cout << "\nDIEM TRUNG BINH CAO NHAT CUA SINH VIEN DAI HOC LA: " << result << endl;
	cout << "\nSINH VIEN CO DIEM " << result << " la:\n";
	for (size_t i = 0; i < list_sv_dh.size(); i++) {
		if (list_sv_dh[i].get_diem_trungbinh() == result) {
			cout << "\nSinh vien dai hoc thu " << index++ << endl;
			list_sv_dh[i].Xuat();
			cout << endl;
		}
	}

	return;
}
