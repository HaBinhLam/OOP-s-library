//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include "cGiaSuc.h"

using namespace std;

//nhom ham khoi tao
cGiaSuc::cGiaSuc(unsigned int a) :soluong(a) {}

//nhom ham set get
unsigned int cGiaSuc::get_soluong() {
	return soluong;
}
void cGiaSuc::set_soluong(const unsigned int& a) {
	soluong = a;
}
