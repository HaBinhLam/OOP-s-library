// MSSV: 24520063
// Họ tên: Nguyễn Ngọc Thu An
// Ngày sinh: 17/09/2006
// Lớp: IT002.P26.1
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

struct sinhvien {
	string hovaten;
	float toan;
	float van;
};

void nhapThongTin(vector <sinhvien>& a);
float diemtrungbinh(const sinhvien& a);
void timThongTin(const vector <sinhvien>& a);
void xuatHoTen(const sinhvien& a, bool caonhat);


int main()
{
	cout << "Nhap so luong hoc sinh: ";
	int n;
	cin >> n;
	

	vector<sinhvien> a(n);

	nhapThongTin(a);
	timThongTin(a);

	return 0;
}



float diemtrungbinh(const sinhvien& a) {
	return (a.toan + a.van) / 2.0;
}

void nhapThongTin(vector <sinhvien>& a) {
	for (int i = 0; i < a.size(); i++) {
		cin.ignore();
		cout << "Nhap ho va ten: ";
		getline(cin, a[i].hovaten);

		cout << "Nhap diem Toan: ";
		cin >> a[i].toan;

		cout << "Nhap diem Van: ";
		cin >> a[i].van;

	}
}

void xuatHoTen(const sinhvien& a, bool caonhat) {
	cout << "Thong tin sinh vien co diem " << (caonhat ? "cao " : "thap ") << " nhat:\n";
	cout << "Ho va ten: " << a.hovaten << endl ;
	cout << "Diem Toan: " << a.toan << endl;
	cout << "Diem Van: " << a.van << endl;
	cout << "Diem trung binh: " << fixed << setprecision(2) << diemtrungbinh(a) << endl;
}

void timThongTin(const vector <sinhvien>& a) {
	float caonhat = diemtrungbinh(a[0]);
	float thapnhat = diemtrungbinh(a[0]);
	int high = 0, low = 0;

	for (int i = 1; i < a.size(); i++) {
		float diemTB = diemtrungbinh(a[i]);
		if (diemTB < thapnhat) {
			low = i;
			thapnhat = diemTB;
		}
		if (diemTB > caonhat) {
			high = i;
			caonhat = diemTB;
		}
	}
	xuatHoTen(a[high], true);
	cout << endl;
	xuatHoTen(a[low], false);
	return;

}