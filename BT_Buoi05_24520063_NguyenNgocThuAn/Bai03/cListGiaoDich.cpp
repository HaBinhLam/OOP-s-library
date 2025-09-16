//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cListGiaoDich.h"
using namespace std;
//nhom ham khoi tao
cListGiaoDich::cListGiaoDich(int n, int m) {
	list_gold.resize(n);
	list_money.resize(m);
}

//nhom ham set get
void cListGiaoDich::set_size_gold(const int& n) {
	list_gold.resize(n);
}
void cListGiaoDich::set_size_money(const int& n) {
	list_money.resize(n);
}
int cListGiaoDich::get_size_gold() {
	return (int)list_gold.size();
}
int cListGiaoDich::get_size_money() {
	return (int)list_money.size();
}

//nhom ham xu ly
void cListGiaoDich::Nhap() {
	int n, m;
	cout << "\n---NHAP GIAO DICH VANG---\n";
	cout << "\nNhap so giao dich: ";
	cin >> n;
	set_size_gold(n);

	for (size_t i = 0; i < list_gold.size(); i++) {
		cout << "\nNhap giao dich vang thu " << i + 1 << endl;
		list_gold[i].Nhap();
	}
	cout << "\n---NHAP GIAO DICH TIEN TE---\n";
	cout << "\nNhap so giao dich: ";
	cin >> m;
	set_size_money(m);

	for (size_t i = 0; i < list_money.size(); i++) {
		cout << "\nNhap giao dich tien thu " << i + 1 << endl;
		list_money[i].Nhap();
	}

	return;
}
void cListGiaoDich::Xuat() {
	
	cout << "\n---GIAO DICH VANG---\n";
	for (size_t i = 0; i < list_gold.size(); i++) {
		cout << "\nGiao dich thu " << i + 1 << endl;
		list_gold[i].Xuat();
		cout << endl;
	}

	
	cout << "\n---GIAO DICH TIEN TE---\n";
	for (size_t i = 0; i < list_gold.size(); i++) {
		cout << "\nGiao dich thu " << i + 1 << endl;
		list_gold[i].Xuat();
		cout << endl;
	}

	return;
}

unsigned long long cListGiaoDich::thanhtien_highest() {
	unsigned long long result = 0;
	for (size_t i = 0; i < list_gold.size(); i++) {
		if (list_gold[i].get_thanhtien() > result) {
			result = list_gold[i].get_thanhtien();
		}
	}

	return result;
}

void cListGiaoDich::gold_thanhtien_highest() {
	cout << "\n---GIAO DICH VANG CO THANH TIEN CAO NHAT---\n";
	unsigned long long result = thanhtien_highest();
	for (size_t i = 0; i < list_gold.size(); i++) {
		if (list_gold[i].get_thanhtien() == result) {
			list_gold[i].Xuat();
			cout << endl;
		}
	}

	return;
}

unsigned long long cListGiaoDich::euro_lowest() {
	unsigned long long result = list_money[0].get_thanhtien();
	for (size_t i = 1; i < list_money.size(); i++) {
		if (list_money[i].get_thanhtien() < result) {
			result = list_money[i].get_thanhtien();
		}
	}

	return result;
}

void cListGiaoDich::GD_euro_lowest() {
	cout << "\n---GIAO DICH EURO CO THANH TIEN THAP NHAT---\n";
	unsigned long long result = euro_lowest();
	for (size_t i = 0; i < list_money.size(); i++) {
		if (list_money[i].get_thanhtien() == result) {
			list_money[i].Xuat();
			cout << endl;
		}
	}

	return;
}
void cListGiaoDich::GD_thanhtien_tren1ty() {
	cout << "\n---GIAO DICH CO THANH TIEN TREN 1 TY DONG---\n";
	bool print = 0;
	unsigned long long parem = 1000000000;
	int index = 0;
	for (size_t i = 0; i < list_money.size(); i++) {
		if (list_money[i].get_thanhtien() > parem){
			cout << "\nGiao dich tien te thu " << index++;
			list_money[i].Xuat();
			cout << endl;
			print = 1;
		}

	}

	index = 0;
	for (size_t i = 0; i < list_gold.size(); i++) {
		if (list_gold[i].get_thanhtien() > parem) {
			cout << "\nGiao dich vang thu " << index++;
			list_gold[i].Xuat();
			cout << endl;
			print = 1;
		}
	}
	
	if (print == 0) {
		cout << "\nKhong co giao dich tren 1 ty.\n";
	}

	return;
}