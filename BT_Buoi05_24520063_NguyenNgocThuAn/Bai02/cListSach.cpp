//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cListSach.h"

using namespace std;
//nhom ham khoi tao
cListSach::cListSach(int a, int b) {
	list_sgk.resize(a);
	list_stk.resize(b);
}

//nhom ham get set
void cListSach::set_size_sgk(const int& a) {
	list_sgk.resize(a);
}
void cListSach::set_size_stk(const int& b) {
	list_stk.resize(b);
}

int cListSach::get_size_sgk() {
	return (int)list_sgk.size();
}
int cListSach::get_size_stk() {
	return (int)list_stk.size();
}

//nhom ham xu ly

void cListSach::Nhap() {
	int x, y;
	cout << "\n---NHAP THONG TIN SACH GIAO KHOA---\n";
	cout << "\nNhap so luong sach giao khoa: ";
	cin >> x;
	set_size_sgk(x);

	for (int i = 0; i < x; i++) {
		cout << "\nCuon sach giao khoa thu " << i + 1 << endl;
		list_sgk[i].Nhap();
		cout << endl;
	}


	cout << "\n---NHAP THONG TIN SACH THAM KHAO---\n";
	cout << "\nNhap so luong sach tham khao: ";
	cin >> y;
	set_size_stk(y);
	
	for (int i = 0; i < y; i++) {
		cout << "\nCuon sach tham khao thu " << i + 1 << endl;
		list_stk[i].Nhap();
		cout << endl;
	}

	return;
}
void cListSach::Xuat() {
	
	cout << "\n---THONG TIN SACH GIAO KHOA---\n";
	for (size_t i = 0; i < list_sgk.size(); i++) {
		cout << "\nCuon sach giao khoa thu " << i + 1 << endl;
		list_sgk[i].Xuat();
		cout << endl;
	}

	
	cout << "\n---THONG TIN SACH THAM KHAO---\n";
	for (size_t i = 0; i < list_stk.size(); i++) {
		cout << "\nCuon sach tham khao thu " << i + 1 << endl;
		list_stk[i].Xuat();
		cout << endl;
	}

	return;

}
unsigned long long cListSach::tong_tien_sgk() {
	unsigned long long kq = 0; 
	for (size_t i = 0; i < list_sgk.size(); i++) {
		kq += list_sgk[i].get_thanhtien();
	}

	return kq;
}
unsigned long long cListSach::tong_tien_stk() {
	unsigned long long kq = 0;
	for (size_t i = 0; i < list_stk.size(); i++) {
		kq += list_stk[i].get_thanhtien();
	}

	return kq;
}

double cListSach::tbc_dongia_stk() {
	unsigned long long total = 0;
	for (size_t i = 0; i < list_stk.size(); i++) {
		total += list_stk[i].get_don_gia();
	}
	int size = (int)list_sgk.size();

	return total * 1.0 / size;
}
void cListSach::xuat_tien_sach() {
	cout << "\n---TONG THANH TIEN SACH---\n";
	cout << "\nSach giao khoa: " << tong_tien_sgk();
	cout << "\nSach tham khao: " << tong_tien_stk();

	cout << "\n---TRUNG BINH CONG DON GIA CUA SACH THAM KHAO---\n";
	cout << tbc_dongia_stk() <<" dong.";
}

void cListSach::timsach(const string& a) {
	cout << "\n---CAC SACH CAN TIM---\n";
	bool check = 0;
	for (size_t i = 0; i < list_sgk.size(); i++) {
		if (list_sgk[i].get_NXB() == a) {
			list_sgk[i].Xuat();
			cout << endl;
			check = 1;
		}
	}
	for (size_t i = 0; i < list_stk.size(); i++) {
		if (list_stk[i].get_NXB() == a) {
			list_stk[i].Xuat();
			cout << endl;
			check = 1;
		}
	}
	if (!check) {
		cout << "\nKhong co sach nao cua nha xuat ban " << a << " !";
	}

	return;
	
}