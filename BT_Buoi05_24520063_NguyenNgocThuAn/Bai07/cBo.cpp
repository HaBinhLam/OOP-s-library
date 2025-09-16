//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cBo.h"
using namespace std;

//nhom ham khoi tao
cBo::cBo(unsigned int a) :cGiaSuc(a) {}


//nhom ham xu ly
void cBo::keu() {
	cout << "\nCon bo keu: UM BO!\n";

	return;
}
unsigned int cBo::sinhcon() {
	unsigned int tongcon = 0;
	for (int i = 0; i < soluong; i++) {
		tongcon += rand() % 2 + 1; //sinh 1-2 con
	}
	set_soluong(tongcon);
	return tongcon;
}
unsigned int cBo::chomilk() {
	unsigned int tongsua = 0;
	for (int i = 0; i < soluong; i++) {
		tongsua += rand() % 21; //0-20 lit
	}
	
	return tongsua;
}