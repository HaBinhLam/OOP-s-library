//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cCuu.h"

using namespace std;


//nhom ham khoi tao
cCuu::cCuu(unsigned int a) :cGiaSuc(a) {}


//nhom ham xu ly
void cCuu::keu() {
	cout << "\nCon cuu keu: BE BE!\n";

	return;
}
unsigned int cCuu::sinhcon() {
	unsigned int tongcon = 0;
	for (int i = 0; i < soluong; i++) {
		tongcon += rand() % 2 + 1; //sinh 1-2 con
	}
	set_soluong(tongcon);
	return tongcon;
}
unsigned int cCuu::chomilk() {
	unsigned int tongsua = 0;
	for (int i = 0; i < soluong; i++) {
		tongsua += rand() % 6; //0-5 lit
	}

	return tongsua;
}