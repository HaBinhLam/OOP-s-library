//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cListNhanVienVP.h"
#include "cNhanVienVP.h"

	//nhom ham khoi tao
cListNhanVienVP::cListNhanVienVP(int n) {
	ds.resize(n);
}
	//nhom ham set get
int cListNhanVienVP::getsoluong_nhanvien() {
	return ds.size();
}
	//nhom ham xu ly
void cListNhanVienVP::nhap_danhsach() {
	int n;
	cout << "Nhap so luong nhan vien: ";
	cin >> n;
	cout << endl;
	ds.resize(n);
	for (int i = 0; i < ds.size(); i++) {
		cout << "Nhap thong tin nhan vien thu " << i + 1 << endl;
		ds[i].nhap_thongtin();
	}
}
void cListNhanVienVP::xuat_danhsach() {
	for (int i = 0; i < ds.size(); i++) {
		cout << endl;
		ds[i].xuat_thongtin();
	}
}
double cListNhanVienVP::tim_luongcaonhat() {
	double luong = ds[0].getsalary();
	for (int i = 1; i < ds.size(); i++) {
		if (luong < ds[i].getsalary()) {
			luong = ds[i].getsalary();
		}
	}
	return luong;
}
void cListNhanVienVP::xuat_NVluongcaonhat() {
	double luong = tim_luongcaonhat();
	for (int i = 0; i < ds.size(); i++) {
		if (luong == ds[i].getsalary()) {
			cout << endl;
			ds[i].xuat_thongtin();
		}
	}
}
short cListNhanVienVP::tim_tuoicaonhat() {
	short tuoi = ds[0].tinh_tuoi();
	for (int i = 1; i < ds.size(); i++) {
		if (tuoi < ds[i].tinh_tuoi()) {
			tuoi = ds[i].tinh_tuoi();
		}
	}
	return tuoi;
}
void cListNhanVienVP::xuat_NVtuoicaonhat() {
	short tuoi = tim_tuoicaonhat();
	for (int i = 0; i < ds.size(); i++) {
		if (tuoi == ds[i].tinh_tuoi()) {
			cout << endl;
			ds[i].xuat_thongtin();
		}
	}
}
double cListNhanVienVP::tinh_tongluong() {
	double tong = 0;
	for (int i = 0; i < ds.size(); i++) {
		tong += ds[i].getsalary();
	}
	return tong;
}
void cListNhanVienVP::sapxeptang_luong() {
	for (int i = 0; i < ds.size() - 1; i++) {
		for (int j = 0; j < ds.size() - i - 1; j++) {
			if (ds[j].getsalary() > ds[j + 1].getsalary()) {
				swap(ds[j], ds[j + 1]);
			}
		}
	}
}