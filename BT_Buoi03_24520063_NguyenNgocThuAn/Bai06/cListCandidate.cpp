//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cListCandidate.h"

using namespace std;

cListCandidate::cListCandidate(int n) {
	ds.resize(n);
}
//nhom ham set get
int cListCandidate::getsoluong_thisinh() {
	return static_cast<int>(ds.size());
}
//nhom ham xu ly
void cListCandidate::nhap_danhsach() {
	int n;
	cout << "Nhap so luong thi sinh: ";
	cin >> n;
	cout << endl;
	ds.resize(n);
	for (int i = 0; i < ds.size(); i++) {
		cout << "Nhap thong tin thi sinh thu " << i + 1 << endl;
		ds[i].nhap_thongtin();
	}
}

void cListCandidate::xuat_danhsach()const{
	for (int i = 0; i < ds.size(); i++) {
		cout << endl;
		ds[i].xuat_thongtin();
	}
}

void cListCandidate::xuat_tongdiemhon15()const {
	for (int i = 0; i < ds.size(); i++) {
		if (ds[i].tinh_tongdiem() > 15) {
			cout << endl;
			ds[i].xuat_thongtin();
		}
	}
	
}

float cListCandidate::tim_diemcaonhat()const {
	float diem_max = 0;
	for (int i = 0; i < ds.size(); i++) {
		if (ds[i].tinh_tongdiem() > diem_max) {
			diem_max = ds[i].tinh_tongdiem();
		}
	}
	return diem_max;
}

void cListCandidate::xuat_diemcaonhat()const {
	float x = tim_diemcaonhat();
	for (int i = 0; i < ds.size(); i++) {
		if (ds[i].tinh_tongdiem() == x) {
			cout << endl;
			ds[i].xuat_thongtin();
		}
	}
}
void cListCandidate::sapxep_giamdan() {
	for (int i = 0; i < ds.size() - 1; i++) {
		for (int j = 0; j < ds.size() - i - 1; j++) {
			if (ds[j].tinh_tongdiem() < ds[j + 1].tinh_tongdiem()) {
				swap(ds[j], ds[j + 1]);
			}
		}
	}
}