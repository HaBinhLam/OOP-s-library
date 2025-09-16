//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cNongTrai.h"

using namespace std;

cNongTrai::cNongTrai() {}

void cNongTrai::nhap_nongtrai() {
	cout << "\n---NHAP NONG TRAI VUI VE---\n";
	unsigned int a, b, c;
	cout << "\nNhap so luong con bo: ";
	cin >> a; 
	cow.set_soluong(a);

	cout << "\nNhap so luong con cuu: ";
	cin >> b; 
	sheep.set_soluong(b);

	cout << "\nNhap so luong con de: ";
	cin >> c; 
	goat.set_soluong(c);
}
void cNongTrai::nongtrai_doi() {
	cout << "\n---GIA SUC DOI---\n";
	cow.keu();
	sheep.keu();
	goat.keu();
}
void cNongTrai::thongke_sau_1lua() {
	srand((unsigned int)time(0));
	unsigned int bo_decon = cow.sinhcon();
	unsigned int cuu_decon = sheep.sinhcon();
	unsigned int de_decon = goat.sinhcon();

	unsigned int bo_chosua = cow.chomilk();
	unsigned int cuu_chosua = sheep.chomilk();
	unsigned int de_chosua = goat.chomilk();

	cout << "\n---THONG KE SAU MOT LUA---\n";
	cout << "\nSo luong Bo: " << cow.get_soluong() << " (sinh " << bo_decon << " con)\n";
	cout << "\nSo luong Cuu: " << sheep.get_soluong() << " (sinh " << cuu_decon << " con)\n";
	cout << "\nSo luong De: " << goat.get_soluong() << " (sinh " << de_decon << " con)\n";

	cout << "\nTong so lit sua: " << bo_chosua + cuu_chosua + de_chosua << " lit\n";
	cout << "\nTrong do:\n";
	cout << "Sua bo: " << bo_chosua << " lit\n" << "Sua cuu: " << cuu_chosua << " lit\n" << "Sua de: " << de_chosua << " lit\n";
}

