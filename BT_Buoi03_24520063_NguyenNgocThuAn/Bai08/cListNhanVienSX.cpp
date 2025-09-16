//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cListNhanVienSX.h"
#include "cNhanVienSX.h"

//nhom ham khoi tao
cListNhanVienSX::cListNhanVienSX(int n) {
	ds.resize(n);
}
//nhom ham set get
int cListNhanVienSX::getsoluong_nhanvien() {
	return ds.size();
}
//nhom ham xu ly
void cListNhanVienSX::nhap_danhsach() {
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
void cListNhanVienSX::xuat_danhsach() {
	for (int i = 0; i < ds.size(); i++) {
		cout << endl;
		ds[i].xuat_thongtin();
		
	}
}
double cListNhanVienSX::tim_luongthapnhat() {
	double luong = ds[0].tinh_luong();
	for (int i = 1; i < ds.size(); i++) {
		if (luong > ds[i].tinh_luong()) {
			luong = ds[i].tinh_luong();
		}
	}
	return luong;
}
void cListNhanVienSX::xuat_NVluongthapnhat() {
	double luong = tim_luongthapnhat();
	for (int i = 0; i < ds.size(); i++) {
		if (luong == ds[i].tinh_luong()) {
			cout << endl;
			ds[i].xuat_thongtin();
		}
	}
}
short cListNhanVienSX::tim_tuoicaonhat() {
	short tuoi = ds[0].tinh_tuoi();
	for (int i = 1; i < ds.size(); i++) {
		if (tuoi < ds[i].tinh_tuoi()) {
			tuoi = ds[i].tinh_tuoi();
		}
	}
	return tuoi;
}
void cListNhanVienSX::xuat_NVtuoicaonhat() {
	short tuoi = tim_tuoicaonhat();
	for (int i = 0; i < ds.size(); i++) {
		if (tuoi == ds[i].tinh_tuoi()) {
			cout << endl;
			ds[i].xuat_thongtin();
		}
	}
}
double cListNhanVienSX::tinh_tongluong() {
	double tong = 0;
	for (int i = 0; i < ds.size(); i++) {
		tong += ds[i].tinh_luong();
	}
	return tong;
}
void cListNhanVienSX::sapxeptang_luong() {
	for (int i = 0; i < ds.size() - 1; i++) {
		for (int j = 0; j < ds.size() - i - 1; j++) {
			if (ds[j].tinh_luong() > ds[j + 1].tinh_luong()) {
				swap(ds[j], ds[j + 1]);
			}
		}
	}
}