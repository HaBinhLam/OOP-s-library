//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include "cDaThuc.h"

istream& operator>>(istream& in, cDaThuc& dathuc) {
	int n;
	cout << "Nhap so luong don thuc: ";
	in >> n;
	dathuc.ds.resize(n);
	for (int i = 0; i < n; i++) {
		cout << "Don thuc thu " << i + 1 << ":\n";
		in >> dathuc.ds[i];
	}
	return in;

}
ostream& operator<<(ostream& out, cDaThuc& dathuc) {
	if (dathuc.ds.empty()) {
		out << "0";
	}
	else {
		if (dathuc.ds[0].getheso() != 0) {
			out << dathuc.ds[0].getheso();
		}
		if (dathuc.ds[0].getbac() > 0) {
			out << "x";
			if (dathuc.ds[0].getbac() > 1) {
				out << "^" << dathuc.ds[0].getbac();
			}
		}
		out << " ";

		for (int i = 1; i < dathuc.ds.size(); i++) {
			out << dathuc.ds[i];
		}
	}
	return out;
}

double cDaThuc::tinh_giatri(double x)const {
	double tong = 0;
	for (int i = 0; i < ds.size(); i++) {
		tong += ds[i].tinh_giatri(x);
	}
	return tong;
}

cDaThuc cDaThuc::operator+(cDaThuc& dathuc) {
	cDaThuc kq;
	for (int i = 0; i < ds.size(); i++) {
		kq.ds.push_back(ds[i]);
	}
	for (int i = 0; i < dathuc.ds.size(); i++) {
		bool trung_bac = false;
		int bac_cantim = dathuc.ds[i].getbac();
		double heso_other = dathuc.ds[i].getheso();

		for (int j = 0; j < kq.ds.size(); j++) {
			if (kq.ds[j].getbac() == bac_cantim) {
				double tong = kq.ds[i].getheso() + heso_other;
				kq.ds[j].setheso(tong);
				trung_bac = true;
				break;
			}
		}

		if (!trung_bac) {
			kq.ds.push_back(dathuc.ds[i]);
		}
	}
	return kq;

}
cDaThuc cDaThuc::operator-(cDaThuc& dathuc) {
	cDaThuc kq;
	for (int i = 0; i < ds.size(); i++) {
		kq.ds.push_back(ds[i]);
	}
	for (int i = 0; i < dathuc.ds.size(); i++) {
		bool trung_bac = false;
		int bac_cantim = dathuc.ds[i].getbac();
		double heso_other = dathuc.ds[i].getheso();

		for (int j = 0; j < kq.ds.size(); j++) {
			if (kq.ds[j].getbac() == bac_cantim) {
				double hieu = kq.ds[i].getheso() - heso_other;
				kq.ds[j].setheso(hieu);
				trung_bac = true;
				break;
			}
		}

		if (!trung_bac) {
			cDonThuc moi(-heso_other, bac_cantim);
			kq.ds.push_back(moi);
		}
	}
	return kq;

}