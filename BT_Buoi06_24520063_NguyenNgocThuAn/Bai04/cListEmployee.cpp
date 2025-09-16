//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cListEmployee.h"
using namespace std;

//nhom ham khoi tao
cListEmployee::cListEmployee(int a) {
	danhsach.resize(a);
}
cListEmployee::~cListEmployee() {
	for (cEmployee* nhanvien : danhsach) {
		delete nhanvien;
	}
}

//nhom ham xu li
void cListEmployee::nhap_danhsach() {
	cout << "\n---NHAP DANH SACH NHAN VIEN---\n";
	cout << "\nNhap so luong nhan vien: ";
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "\nNhan vien thu " << i + 1 << endl;
		bool x;
		cout << "\nNhap cong viec ('1': LAP TRINH VIEN - '0': KIEM CHUNG VIEN): ";
		cin >> x;

		cEmployee* nhanvien = nullptr;
		if (x == 1) {
			nhanvien = new cCoder();
			nhanvien->set_coder(x);
		}
		else {
			nhanvien = new cTester();
			nhanvien->set_coder(x);
		}
		if (nhanvien) {
			nhanvien->Nhap();
			danhsach.push_back(nhanvien);
		}
	}
}
void cListEmployee::xuat_danhsach() {
	cout << "\n---XUAT DANH SACH NHAN VIEN---\n";
	int index = 1;
	for (cEmployee* nhanvien : danhsach) {
		cout << index++ << ".\n";
		if (nhanvien->get_coder() == 1) {
			cout << "Lap trinh vien.";
		}
		else {
			cout << "Kiem chung vien.";
		}
		nhanvien->Xuat();
		cout << endl;
	}
	return;
}
double cListEmployee::luong_trungbinh() {
	double total = 0;
	for (cEmployee* nhanvien : danhsach) {
		total += nhanvien->get_luong();
	}
	return total / (int)(danhsach.size());

}
void cListEmployee::xuat_nv_thaphon_luong_trungbinh() {
	cout << "\n---DANH SACH NHAN VIEN CO LUONG THAP HON MUC LUONG TRUNG BINH---\n";
	int index = 1;
	double trungbinh= luong_trungbinh();
	for (cEmployee* nhanvien : danhsach) {
		if (nhanvien->get_luong() < trungbinh) {
			cout << index++ << ".\n";
			if (nhanvien->get_coder() == 1) {
				cout << "Lap trinh vien.";
			}
			else {
				cout << "Kiem chung vien.";
			}
			nhanvien->Xuat();
			cout << endl;
		}
	}
}

unsigned long long cListEmployee::luong_highest() {
	unsigned long long highest = 0;
	for (cEmployee* nhanvien : danhsach) {
		if (highest < nhanvien->get_luong()) {
			highest = nhanvien->get_luong();

		}
	}
	return highest;
}
unsigned long long cListEmployee::luong_lowest() {
	unsigned long long lowest = 9999999999;
	for (cEmployee* nhanvien : danhsach) {
		if (lowest > nhanvien->get_luong()) {
			lowest = nhanvien->get_luong();

		}
	}
	return lowest;
}

unsigned long long cListEmployee::coder_luong_highest() {
	unsigned long long highest = 0;
	for (cEmployee* nhanvien : danhsach) {
		if (highest < nhanvien->get_luong()&&nhanvien->get_coder()==1) {
			highest = nhanvien->get_luong();

		}
	}
	return highest;
}
unsigned long long cListEmployee::tester_luong_lowest() {
	unsigned long long lowest = 9999999999;
	for (cEmployee* nhanvien : danhsach) {
		if (lowest > nhanvien->get_luong()&&nhanvien->get_coder()==0) {
			lowest = nhanvien->get_luong();

		}
	}
	return lowest;
}

void cListEmployee::xuat_nv_luong_highest() {
	cout << "\n---NHAN VIEN CO MUC LUONG CAO NHAT---\n";
	int index = 1;
	unsigned long long highest = luong_highest();
	for (cEmployee* nhanvien : danhsach) {
		if (nhanvien->get_luong() == highest) {
			cout << index++ << ".\n";
			if (nhanvien->get_coder() == 1) {
				cout << "Lap trinh vien.";
			}
			else {
				cout << "Kiem chung vien.";
			}
			nhanvien->Xuat();
			cout << endl;
		}
	}
}
void cListEmployee::xuat_nv_luong_lowest() {
	cout << "\n---NHAN VIEN CO MUC LUONG THAP NHAT---\n";
	int index = 1;
	unsigned long long lowest = luong_lowest();
	for (cEmployee* nhanvien : danhsach) {
		if (nhanvien->get_luong() == lowest) {
			cout << index++ << ".\n";
			if (nhanvien->get_coder() == 1) {
				cout << "Lap trinh vien.";
			}
			else {
				cout << "Kiem chung vien.";
			}
			nhanvien->Xuat();
			cout << endl;
		}
	}
}

void cListEmployee::xuat_coder_luong_highest() {
	cout << "\n---LAP TRINH VIEN CO LUONG CAO NHAT---\n";
	unsigned long long highest = coder_luong_highest();
	if (highest == 0) {
		cout << "\nKhong co lap trinh vien nao trong danh sach nhan vien.\n";
	}
	else {
		int index = 1;
		for (cEmployee* nhanvien : danhsach) {
			if (nhanvien->get_luong() == highest && nhanvien->get_coder()==1) {
				cout << index++ << ".";
				nhanvien->Xuat();
				cout << endl;
			}
		}
	}
}
void cListEmployee::xuat_tester_luong_lowest() {
	cout << "\n---KIEM CHUNG VIEN CO LUONG THAP NHAT---\n";
	unsigned long long lowest = tester_luong_lowest();
	if (lowest == 9999999999) {
		cout << "\nKhong co kiem chung vien nao trong danh sach nhan vien.\n";
	}
	else {
		int index = 1;
		for (cEmployee* nhanvien : danhsach) {
			if (nhanvien->get_luong() == lowest && nhanvien->get_coder() == 0) {
				cout << index++ << ".";
				nhanvien->Xuat();
				cout << endl;
			}
		}
	}
}