// MSSV: 24520063
// Họ tên: Nguyễn Ngọc Thu An
// Ngày sinh: 17/09/2006
// Lớp: IT002.P26.1
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct sinhvien {
	string hovaten;
	float toan;
	float van;
};

void nhapThongTin(sinhvien& a);
float tinhdiemtrungbinh(const sinhvien& a);
void xuatThongTin(const sinhvien& a);


int main()
{
	sinhvien a;
	nhapThongTin(a);
	xuatThongTin(a);

	return 0;

}

void nhapThongTin(sinhvien& a) {
	cout << "Nhap ho va ten: ";
	getline(cin, a.hovaten);

	cout << "Nhap diem Toan: ";
	cin >> a.toan;

	cout << "Nhap diem Van: ";
	cin >> a.van;
}

float tinhdiemtrungbinh(const sinhvien& a) {
	return (a.toan + a.van) / 2.0;
}

void xuatThongTin(const sinhvien& a) {
	float diem = tinhdiemtrungbinh(a);
	cout << "Diem trung binh: " << fixed << setprecision(2) << diem << endl;
}
