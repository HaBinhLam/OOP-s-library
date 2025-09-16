//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cDe.h"

using namespace std;

//nhom ham khoi tao
cDe::cDe(unsigned int a) :cGiaSuc(a) {}


//nhom ham xu ly
void cDe::keu() {
	cout << "\nCon de keu: BE BE!\n";

	return;
}
unsigned int cDe::sinhcon() {
	unsigned int tongcon = 0;
	for (int i = 0; i < soluong; i++) {
		tongcon += rand() % 2 + 1; //sinh 1-2 con
	}
	set_soluong(tongcon);
	return tongcon;
}
unsigned int cDe::chomilk() {
	unsigned int tongsua = 0;
	for (int i = 0; i < soluong; i++) {
		tongsua += rand() % 11; //0-10 lit
	}

	return tongsua;
}