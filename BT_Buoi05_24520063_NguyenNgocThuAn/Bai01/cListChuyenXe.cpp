//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cListChuyenXe.h"
using namespace std;

cListChuyenXe::cListChuyenXe(int a, int b) {
	list_chuyenxe_ngt.resize(a);
	list_chuyenxe_nt.resize(b);
}

//nhom ham set get
void cListChuyenXe::set_chieu_nt(const int& a) {
	list_chuyenxe_nt.resize(a);
}
void cListChuyenXe::set_chieu_ngt(const int& b) {
	list_chuyenxe_nt.resize(b);
}
int cListChuyenXe::get_chieu_nt() {
	return (int)list_chuyenxe_nt.size();
}
int cListChuyenXe::get_chieu_ngt() {
	return (int)list_chuyenxe_ngt.size();
}

//nhom ham xu ly
void cListChuyenXe::Nhap() {
	int x;
	cout << "\n---NHAP DANH SACH CHUYEN XE NOI THANH---\n";
	cout << "\nNhap so luong xe noi thanh: ";
	cin >> x;
	set_chieu_nt(x);
	for (size_t i = 0; i < list_chuyenxe_nt.size(); i++) {
		cout << "\nChuyen xe noi thanh thu " << i + 1 << endl;
		list_chuyenxe_nt[i].Nhap();
		cout << endl;
	}

	cout << "\n---NHAP DANH SACH CHUYEN XE NGOAI THANH---\n";
	cout << "Nhap so luong xe noi thanh: ";
	cin >> x;
	set_chieu_ngt(x);
	for (size_t i = 0; i < list_chuyenxe_ngt.size(); i++) {
		cout << "\nChuyen xe ngoai thanh thu " << i + 1 << endl;
		list_chuyenxe_ngt[i].Nhap();
		cout << endl;
	}

	return;

}
void cListChuyenXe::Xuat() {

	cout << "\n---DANH SACH XE NOI THANH---\n";
	for (size_t i = 0; i < list_chuyenxe_nt.size(); i++) {
		cout << "\nXe thu " << i + 1 << endl;
		list_chuyenxe_nt[i].Xuat();
		cout << endl;
	}

	cout << "\n---DANH SACH XE NGOAI THANH---\n";
	for (size_t i = 0; i < list_chuyenxe_ngt.size(); i++) {
		cout << "\nXe thu " << i + 1 << endl;
		list_chuyenxe_ngt[i].Xuat();
		cout << endl;
	}

	return;

}
unsigned long long cListChuyenXe::tong_doanhthu_nt() {
	unsigned long long kq = 0;
	for (size_t i = 0; i < list_chuyenxe_nt.size(); i++) {
		kq += list_chuyenxe_nt[i].get_doanhthu();
	}
	
	return kq;
}
unsigned long long cListChuyenXe::tong_doanhthu_ngt() {
	unsigned long long kq = 0;
	for (size_t i = 0; i < list_chuyenxe_ngt.size(); i++) {
		kq += list_chuyenxe_ngt[i].get_doanhthu();
	}

	return kq;
}

void cListChuyenXe::xuat_tongdoanhthu() {
	cout << "\n---TONG DOANH THU CAC CHUYEN XE---\n";
	cout << "\nNoi thanh: " << tong_doanhthu_nt() << " dong.";
	cout << "\nNgoai thanh: " << tong_doanhthu_ngt() << " dong.";

	return;
}
cListChuyenXe::~cListChuyenXe() {

}