#include "cGiaDinh.h"
using namespace std;

//nhom ham khoi tao
cGiaDinh::cGiaDinh(string a, string b, string c, float d, float e, unsigned long long f, cDate g, bool h, bool i) : cKhachHang(a, b, c, d, e, f, g, h), ho_ngheo(i) {}
//nhom ham set get
void cGiaDinh::set_ho_ngheo(const bool& a) {
	ho_ngheo = a;
}
bool cGiaDinh::get_ho_ngheo() {
	return ho_ngheo;
}

//nhom ham xu ly
void cGiaDinh::Nhap() {
	cout << "Nhap '1' neu gia dinh thuoc ho ngheo\n";
	cout << "Nhap '0' neu gia dinh khong thuoc ho ngheo\n";
	cout << "Nhap: ";
	cin >> ho_ngheo;
}
void cGiaDinh::Xuat() {
	if (ho_ngheo) cout << "\nGia dinh thuoc ho ngheo";
	else cout << "\nGia dinh khong thuoc ho ngheo";
	return;
}
unsigned long long cGiaDinh::tinh_tien_dien() {
	unsigned long long tiendien = 0;
	float kw_tieuthu = chiso_donghodien_new - chiso_donghodien_old;
	if (kw_tieuthu <= 50) {
		tiendien += (kw_tieuthu * 2500);
	}
	else {
		tiendien += (50 * 2500);
		kw_tieuthu -= 50;
		if (kw_tieuthu <= 50) {
			tiendien += kw_tieuthu * 3000;
		}
		else {
			tiendien += 50 * 3000;
			kw_tieuthu -= 50;
			if (kw_tieuthu > 0) {
				tiendien += kw_tieuthu * 3500;
			}
		}
	}
	return tiendien;
}
void cGiaDinh::tinh_tien_thanhtoan() {
	unsigned long long tiendien = tinh_tien_dien();
	if (ho_ngheo == 1) {
		sotien_thanhtoan = tiendien;
	}
	else {
		sotien_thanhtoan = tiendien + 0.1 * tiendien;
	}

	return;
}