#include "cListHoaDon.h"
using namespace std;


//nhom ham khoi tao
cListHoaDon::cListHoaDon(int a) {}

void cListHoaDon::nhap_danhsach(int a) {
	for (int i = 0; i < a; i++) {
		bool loai = 0;
		cout << "\nNhap '1' neu la doanh nghiep, '0' neu la ho gia dinh: ";
		cin >> loai;

		cKhachHang* hoadon = nullptr;
		if (loai == 1) {
			hoadon = new cDoanhNghiep();
			hoadon->set_doanhnghiep(loai);
		}
		else {
			hoadon = new cGiaDinh();
			hoadon->set_doanhnghiep(loai);
		}

		if (hoadon) {
			hoadon->Nhap();
			danhsach.push_back(hoadon);
		}
	}
}
void cListHoaDon::xuat_danhsach() {
	cout << "\n---XUAT DANH SACH HOA DON DOANH NGHIEP---\n";
	for (cKhachHang* hoadon : danhsach) {
		if(hoadon->get_doanhnghiep() == 1)
		{
			hoadon->Xuat();
			cout << endl;
		}
	}
	cout << "\n---XUAT DANH SACH HOA DON HO GIA DINH---\n";
	for (cKhachHang* hoadon : danhsach) {
		if (hoadon->get_doanhnghiep() == 0)
		{
			hoadon->Xuat();
			cout << endl;
		}
	}
}
cListHoaDon::~cListHoaDon() {
	for (cKhachHang* hoadon : danhsach) {
		delete hoadon;
	}
}

unsigned long long cListHoaDon::tinh_tong_tienthanhtoan() {
	unsigned short thang = 5;
	unsigned short nam = 2025;
	unsigned long long total = 0;
	for (cKhachHang* hoadon : danhsach) {
		if (hoadon->get_ngay_phathanh_hoadon().get_month() == thang && hoadon->get_ngay_phathanh_hoadon().get_year() == 2025) {
			total += hoadon->get_sotien_thanhtoan();
		}
	}
	return total;
}

unsigned long long cListHoaDon::tiendien_nhieunhat_giadinh() {
	unsigned long long highest = 0;
	for (cKhachHang* hoadon : danhsach) {
		if (hoadon->get_doanhnghiep() == 0) {
			if (hoadon->get_sotien_thanhtoan() > highest)
				highest = hoadon->get_sotien_thanhtoan();
		}
	}
	return highest;
}
void cListHoaDon::xuat_hogiadinh_tiendien_nhieunhat() {
	cout << "---HO GIA DINH SU DUNG DIEN NHIEU NHAT LA---\n";
	unsigned long long highest = tiendien_nhieunhat_giadinh();
	for (cKhachHang* hoadon : danhsach) {
		if (hoadon->get_doanhnghiep() == 0) {
			if (hoadon->get_sotien_thanhtoan() == highest)
			{
				hoadon->Xuat();
				cout << endl;
			}
		}
	}
}