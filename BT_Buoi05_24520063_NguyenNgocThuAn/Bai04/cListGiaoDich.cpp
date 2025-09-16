//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cListGiaoDich.h"
using namespace std;

//nhom ham khoi tao
cListGiaoDich::cListGiaoDich(int a, int b, int c) {
	list_dat.resize(a);
	list_nhapho.resize(b);
	list_canho.resize(c);
}

//nhom ham set get
void cListGiaoDich::set_size_dat(const int& a) {
	list_dat.resize(a);
}
void cListGiaoDich::set_size_nhapho(const int& b) {
	list_nhapho.resize(b);
}
void cListGiaoDich::set_size_canho(const int& c) {
	list_canho.resize(c);
}

int cListGiaoDich::get_size_dat() {
	return (int)list_dat.size();
}
int cListGiaoDich::get_size_nhapho() {
	return (int)list_nhapho.size();
}
int cListGiaoDich::get_size_canho() {
	return (int)list_canho.size();
}

//nhom ham xu ly
void cListGiaoDich::Nhap() {
	cout << "\n---NHAP DANH SACH GIAO DICH DAT---\n";
	int x;
	cout << "\nNhap so luong giao dich: ";
	cin >> x;
	set_size_dat(x);
	for (size_t i = 0; i < list_dat.size(); i++) {
		cout << "\nGiao dich dat thu " << i + 1 << endl;
		list_dat[i].Nhap();
		cout << endl;
	}

	
	cout << "\n---NHAP DANH SACH GIAO DICH NHA PHO---\n";
	cout << "\nNhap so luong giao dich: ";
	cin >> x;
	set_size_nhapho(x);
	for (size_t i = 0; i < list_nhapho.size(); i++) {
		cout << "\nGiao dich nha pho thu " << i + 1 << endl;
		list_nhapho[i].Nhap();
		cout << endl;
	}

	
	cout << "\n---NHAP DANH SACH GIAO DICH CAN HO CHUNG CU---\n";
	cout << "\nNhap so luong giao dich: ";
	cin >> x;
	set_size_canho(x);
	for (size_t i = 0; i < list_canho.size(); i++) {
		cout << "\nGiao dich can ho chung cu thu " << i + 1 << endl;
		list_canho[i].Nhap();
		cout << endl;
	}

	return;
}
void cListGiaoDich::Xuat() {
	cout << "\n--DANH SACH GIAO DICH DAT--\n";
	for (size_t i = 0; i < list_dat.size(); i++) {
		cout << "\nGiao dich dat thu " << i + 1 << endl;
		list_dat[i].Xuat();
		cout << endl;
	}

	cout << "\n---DANH SACH GIAO DICH NHA PHO---\n";
	for (size_t i = 0; i < list_nhapho.size(); i++) {
		cout << "\nGiao dich nha pho thu " << i + 1 << endl;
		list_nhapho[i].Xuat();
		cout << endl;
	}


	cout << "\n---DANH SACH GIAO DICH CAN HO CHUNG CU---\n";
	for (size_t i = 0; i < list_canho.size(); i++) {
		cout << "\nGiao dich can ho chung cu thu " << i + 1 << endl;
		list_canho[i].Xuat();
		cout << endl;
	}

	return;
}

void cListGiaoDich::xuat_tong_soluong_tungloai() {
	cout << "\n---TONG SO LUONG TUNG LOAI GIAO DICH---\n";
	cout << "\nGiao dich Dat: " << get_size_dat();
	cout << "\nGiao dich Nha pho: " << get_size_nhapho();
	cout << "\nGiao dich Can ho chung cu: " << get_size_canho();
	cout << "\n-----------------------------\n";

	return;
}

double cListGiaoDich::tb_thanhtien_canho() {
	double x = 0;
	for (size_t i = 0; i < list_canho.size(); i++) {
		x += list_canho[i].get_thanhtien();
	}

	return x / get_size_canho();
}
double cListGiaoDich::thanhtien_np_highest() {
	double result = list_nhapho[0].get_thanhtien();
	for (size_t i = 1; i < list_nhapho.size(); i++) {
		if (list_nhapho[i].get_thanhtien() > result) {
			result = list_nhapho[i].get_thanhtien();
		}
	}

	return result;
}
void cListGiaoDich::thanhtien_nhapho_highest() {
	cout << "\n---GIAO DICH NHA PHO CO THANH TIEN CAO NHAT---\n";
	double result = thanhtien_np_highest();
	for (size_t i = 0; i < list_nhapho.size(); i++) {
		if (list_nhapho[i].get_thanhtien() == result) {
			list_nhapho[i].Xuat();
			cout << endl;
		}
	}

	return;
}
void cListGiaoDich::gd_thang12_nam2024() {
	bool print = 0;

	cout << "\n---DANH SACH CAC GIAO DICH VAO THANG 12 NAM 2024---\n";
	cout << "\n***DANH SACH GIAO DICH DAT***\n";
	for (size_t i = 0; i < list_dat.size(); i++) {
		if(list_dat[i].get_ngay_giaodich().get_month()==12&&list_dat[i].get_ngay_giaodich().get_year()==2024){
			list_dat[i].Xuat();
			cout << endl;
			print = 1;
		}
	}
	if (print == 0) {
		cout << "\nKhong co giao dich.\n";
	}

	print = 0;
	cout << "\n***DANH SACH GIAO DICH NHA PHO***\n";
	for (size_t i = 0; i < list_nhapho.size(); i++) {
		if (list_nhapho[i].get_ngay_giaodich().get_month() == 12 && list_nhapho[i].get_ngay_giaodich().get_year() == 2024) {
			list_nhapho[i].Xuat();
			cout << endl;
			print = 1;
		}
	}
	if (print == 0) {
		cout << "\nKhong co giao dich.\n";
	}

	print = 0;
	cout << "\n***DANH SACH GIAO DICH CAN HO CHUNG CU***\n";
	for (size_t i = 0; i < list_canho.size(); i++) {
		if (list_canho[i].get_ngay_giaodich().get_month() == 12 && list_canho[i].get_ngay_giaodich().get_year() == 2024) {
			list_canho[i].Xuat();
			cout << endl;
		}
	}

	if (print == 0) {
		cout << "\nKhong co giao dich.\n";
	}
	return;
}