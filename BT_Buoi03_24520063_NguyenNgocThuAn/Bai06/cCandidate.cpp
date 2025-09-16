//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cCandidate.h"

using namespace std;
//nhom ham khoi tao
cCandidate::cCandidate(string ID , string name , cBirth a, float math, float lit, float eng) :mssv(ID), hoten(name), sinhnhat(a), toan(math), van(lit), anh(eng) {}
//nhom ham set get
void cCandidate::setmssv(string ID) { mssv = ID; }
void cCandidate::sethoten(string name) { hoten = name; }
void cCandidate::setsinhnhat(cBirth a) { sinhnhat = a; }
void cCandidate::settoan(float math) { toan = math; }
void cCandidate::setvan(float lit) { van = lit; }
void cCandidate::setanh(float eng) { anh = eng; }

string cCandidate::getmssv()const { return mssv; }
string cCandidate::gethoten()const { return hoten; }
cBirth cCandidate::getsinhnhat()const { return sinhnhat; }
float cCandidate::gettoan()const { return toan; }
float cCandidate::getvan()const { return van; }
float cCandidate::getanh()const { return anh; }

//nhom ham xu li
void cCandidate::nhap_thongtin() {
	cout << "Nhap ma so sinh vien: ";
	cin >> mssv;
	cout << "Nhap ho ten sinh vien: ";
	cin.ignore();
	getline(cin, hoten);
	cout << "Nhap ngay thang nam sinh:\n";
	sinhnhat.nhap_birth();
	cout << "Nhap diem Toan: ";
	cin >> toan;
	cout << "Nhap diem Van: ";
	cin >> van;
	cout << "Nhap diem Anh: ";
	cin >> anh;
}
void cCandidate::xuat_thongtin()const {
	cout << "Ma so sinh vien: " << mssv << endl;
	cout << "Ho ten sinh vien: " << hoten << endl;
	cout << "Ngay thang nam sinh: "; sinhnhat.xuat_birth(); cout << endl;
	cout << "Diem Toan: " << setprecision(2) << fixed << toan << endl;
	cout << "Diem Van: " << setprecision(2) << fixed << van << endl;
	cout << "Diem Anh: " << setprecision(2) << fixed << anh << endl;
	cout << endl;
}

float cCandidate::tinh_tongdiem()const {
	return (toan + van + anh);
}