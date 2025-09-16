//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include <iostream>
#include "cListKhachHang.h"

using namespace std;

int main() {
	cListKhachHang a;
	cout << "\n---NHAP DANH SACH---\n";
	cout << "\nNhap lan luot so luong khach A B C: ";
	int t, r, z;
	cin >> t >> r >> z;
	a.nhap_danhsach(t, r, z);

	cout << "\n----XUAT DANH SACH---\n";
	a.xuat_danhsach(t, r, z);

	cout << endl ;
	cout << "\n---THAY OI CHO EM 10 DIEM QUA TRINH NHA!!!---\n";
	float x, y;
	for (y = 1.5f; y > -1.5f; y -= 0.1f) {
		for (x = -1.5f; x < 1.5f; x += 0.05f) {
			float a = x * x + y * y - 1;
			if (a * a * a - x * x * y * y * y <= 0.0f)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}
