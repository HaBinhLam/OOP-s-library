//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cListGiaoDich.h"

using namespace std;

//nhom ham khoi tao
cListGiaoDich::cListGiaoDich(int a) {
	danhsach.resize(a);
}
cListGiaoDich::~cListGiaoDich() {
	for (cGiaoDich* giaodich : danhsach) {
		delete giaodich;
	}
}


//nhom ham xu ly
void cListGiaoDich::nhap_danhsach() {
	cout << "\n---NHAP DANH SACH GIAO DICH---\n";
	cout << "\nNhap so luong giao dich: ";
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "\nGiao dich thu " << i + 1 << endl;
		cout << "\nNhap loai giao dich ('1': GD Dat - '2': GD Nha pho - '3': GD Can ho): ";
		unsigned short x; cin >> x;
		cGiaoDich* giaodich = nullptr;
		if (x == 1) {
			giaodich = new cDat();
			giaodich->set_type(x);
		}
		else if (x == 2) {
			giaodich = new cNhaPho();
			giaodich->set_type(x);
		}
		else {
			giaodich = new cCanHo();
			giaodich->set_type(x);
		}
		if (giaodich) {
			giaodich->Nhap();
			danhsach.push_back(giaodich);
		}
	}
}
void cListGiaoDich::xuat_danhsach() {
	cout << "\n---XUAT DANH SACH GIAO DICH---\n";
	int index = 1;
	for (cGiaoDich* giaodich : danhsach) {
		cout << index++ << ".\n";
		if (giaodich->get_type()==1) {
			cout << "Giao dich dat.";
		}
		else if(giaodich->get_type()==2){
			cout << "Giao dich nha pho.";
		}
		else {
			cout << "Giao dich can ho chung cu.";
		}
		giaodich->Xuat();
		cout << endl;
	}
	return;
}

void cListGiaoDich::xuat_tongsoluong_tungloai() {
	int dat = 0;
	int nhapho = 0;
	int canho = 0;
	for (cGiaoDich* giaodich : danhsach) {
		if (giaodich->get_type() == 1) {
			dat++;
		}
		else if (giaodich->get_type() == 2) {
			nhapho++;
		}
		else {
			canho++;
		}
	}

	cout << "\n---TONG SO LUONG TUNG LOAI---\n";
	cout << "So luong giao dich dat: " << dat << endl;
	cout << "So luong giao dich nha pho: " << nhapho << endl;
	cout << "So luong giao dich can ho: " << canho << endl;
}
double cListGiaoDich::tinh_tb_thanhtien_canho() {
	double total = 0;
	int canho = 0;
	for (cGiaoDich* giaodich : danhsach) {
		if (giaodich->get_type() == 3) {
			total += giaodich->get_thanh_tien();
			canho++;
		}
	}
	if (canho == 0) return 0;
	else {
		return total / canho;
	}
	
}
void cListGiaoDich::xuat_tb_thanhtien_canho() {
	cout << "\n---XUAT TRUNG BINH THANH TIEN CAN HO---\n";
	if (tinh_tb_thanhtien_canho() == 0) {
		cout << "\nKhong co giao dich can ho trong danh sach.\n";
	}
	else {
		cout << "\nTrung binh thanh tien la: " << tinh_tb_thanhtien_canho() << endl;
	}
}
unsigned long long cListGiaoDich::thanhtien_nhapho_highest() {
	unsigned long long highest = 0;
	for (cGiaoDich* giaodich : danhsach) {
		if (giaodich->get_type() == 2) {
			if (giaodich->get_thanh_tien() > highest) {
				highest = giaodich->get_thanh_tien();
			}
		}
	}
	return highest;
}
void cListGiaoDich::xuat_thanhtien_nhapho_highest() {
	cout << fixed << setprecision(2);
	cout << "\n---GIAO DICH NHA PHO CO THANH TIEN CAO NHAT---\n";
	unsigned long long highest = thanhtien_nhapho_highest();
	if (highest == 0) {
		cout << "\nKhong co giao dich nha pho trong danh sach.\n";
	}
	else {
		int index = 1;
		for (cGiaoDich* giaodich : danhsach) {
			if (giaodich->get_type() == 2) {
				if (giaodich->get_thanh_tien() == highest) {
					cout << index++ << ".";
					giaodich->Xuat();
					cout << endl;
				}
			}
		}
	}
}
void cListGiaoDich::xuat_giaodich_tgian(unsigned short thang, unsigned short nam) {
	cout << "\n---GIAO DICH TRONG THANG " << thang << " NAM " << nam << " ---\n";
	int index = 1;
	for (cGiaoDich* giaodich : danhsach) {
		if (giaodich->get_ngay_giaodich().get_month() == thang && giaodich->get_ngay_giaodich().get_year() == nam) {
			cout << index << ".\n";
			if (giaodich->get_type() == 1) {
				cout << "Giao dich dat.";
			}
			else if (giaodich->get_type() == 2) {
				cout << "Giao dich nha pho.";
			}
			else {
				cout << "Giao dich can ho chung cu.";
			}
			giaodich->Xuat();
			cout << endl;
		}
	}
	if (index == 1) {
		cout << "\nKhong co giao dich trong thang " << thang << " nam " << nam << endl;
	}
	return;

}
