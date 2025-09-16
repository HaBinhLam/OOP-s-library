//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cListSinhVien.h"

using namespace std;

//nhom ham khoi tao
cListSinhVien::cListSinhVien(int a) {
	danhsach.resize(a);
}
cListSinhVien::~cListSinhVien() {
	for (cSinhVien* sinhvien : danhsach) {
		delete sinhvien;
	}
}

//nhom ham  xu ly
void cListSinhVien::nhap_danhsach() {
	cout << "\n---NHAP DANH SACH SINH VIEN---\n";
	cout << "\nNhap so luong sinh vien: ";
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "\nSinh vien thu " << i + 1 << endl;
		bool x;
		cout << "\nNhap he dao tao ('1': DAI HOC - '0': CAO DANG): ";
		cin >> x;

		cSinhVien* sinhvien = nullptr;
		if (x == 1) {
			sinhvien = new cDaiHoc();
			sinhvien->set_daihoc(x);
		}
		else {
			sinhvien = new cCaoDang();
			sinhvien->set_daihoc(x);
		}
		if (sinhvien) {
			sinhvien->Nhap();
			danhsach.push_back(sinhvien);
		}
	}
}
void cListSinhVien::xuat_danhsach() {
	cout << "\n---XUAT DANH SACH SINH VIEN---\n";
	int index = 1;
	for (cSinhVien* sinhvien : danhsach) {
		cout << index++ << ".\n";
		if (sinhvien->get_daihoc() == 1) {
			cout << "Sinh vien dai hoc.";
		}
		else {
			cout << "Sinh vien cao dang.";
		}
		sinhvien->Xuat();
		cout << endl;
	}
	return;
}

void cListSinhVien::xuat_ds_totnghiep() {
	cout << "\n---DANH SACH SINH VIEN DU DIEU KIEN TOT NGHIEP---\n";
	int index = 1;
	for (cSinhVien* sinhvien : danhsach) {
		if (sinhvien->xettotnghiep()) {
			cout << index++ << ".\n";
			if (sinhvien->get_daihoc() == 1) {
				cout << "Sinh vien dai hoc.";
			}
			else {
				cout << "Sinh vien cao dang.";
			}
			sinhvien->Xuat();
			cout << endl;
		}
	}
	if (index == 1) {
		cout << "\nKhong co sinh vien nao du dieu kien tot nghiep.\n";
	}
}
void cListSinhVien::xuat_ds_0totnghiep() {
	cout << "\n---DANH SACH SINH VIEN KHONG DU DIEU KIEN TOT NGHIEP---\n";
	int index = 1;
	for (cSinhVien* sinhvien : danhsach) {
		if (sinhvien->xettotnghiep()==0) {
			cout << index++ << ".\n";
			if (sinhvien->get_daihoc() == 1) {
				cout << "Sinh vien dai hoc.";
			}
			else {
				cout << "Sinh vien cao dang.";
			}
			sinhvien->Xuat();
			cout << endl;
		}
	}
	if (index == 1) {
		cout << "\nTat ca sinh vien deu du dieu kien tot nghiep.\n";
	}
}

float cListSinhVien::dtb_daihoc_highest() {
	float highest = 0;
	for (cSinhVien* sinhvien : danhsach) {
		if (sinhvien->get_daihoc()) {
			if (highest < sinhvien->get_diemtrungbinh()) {
				highest = sinhvien->get_diemtrungbinh();
			}
		}
	}
	return highest;
}
float cListSinhVien::dtb_caodang_highest() {
	float highest = 0;
	for (cSinhVien* sinhvien : danhsach) {
		if (sinhvien->get_daihoc()==0) {
			if (highest < sinhvien->get_diemtrungbinh()) {
				highest = sinhvien->get_diemtrungbinh();
			}
		}
	}
	return highest;
}
void cListSinhVien::xuat_sv_dtb_daihoc_highest() {
	cout << "\n---SINH VIEN DAI HOC CO DIEM TRUNG BINH CAO NHAT---\n";
	int index = 1;
	float highest = dtb_daihoc_highest();
	for (cSinhVien* sinhvien : danhsach) {
		if (sinhvien->get_daihoc()) {
			if (highest == sinhvien->get_diemtrungbinh()) {
				cout << index++ << ".";
				sinhvien->Xuat();
				cout << endl;
			}
		}
	}
	if (index == 1) {
		cout << "\nKhong co sinh vien dai hoc trong danh sach.\n";
	}
}
void cListSinhVien::xuat_sv_dtb_caodang_highest() {
	cout << "\n---SINH VIEN CAO DANG CO DIEM TRUNG BINH CAO NHAT---\n";
	int index = 1;
	float highest = dtb_caodang_highest();
	for (cSinhVien* sinhvien : danhsach) {
		if (sinhvien->get_daihoc()==0) {
			if (highest == sinhvien->get_diemtrungbinh()) {
				cout << index++ << ".";
				sinhvien->Xuat();
				cout << endl;
			}
		}
	}
	if (index == 1) {
		cout << "\nKhong co sinh vien cao dang trong danh sach.\n";
	}
}

void cListSinhVien::xuat_soluong_0totnghiep_moiloai() {
	int caodang = 0;
	int daihoc = 0;
	for (cSinhVien* sinhvien : danhsach) {
		if (sinhvien->get_daihoc()) {
			daihoc++;
		}
		else {
			caodang++;
		}
	}

	cout << "\n---SO LUONG SINH VIEN KHONG TOT NGHIEP MOI LOAI---\n";
	cout << "\nDai hoc: " << daihoc << " sinh vien.";
	cout << "\nCao dang: " << caodang << " sinh vien.";

	return;

}

