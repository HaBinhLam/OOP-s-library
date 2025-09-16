//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "cBo.h"
#include "cCuu.h"
#include "cDe.h"

using namespace std;

int main() {
	srand(time(0));
	
	unsigned int a, b, c;
	cout << "\nNhap so luong con bo: ";
	cin >> a; cBo cow(a);

	cout << "\nNhap so luong con cuu: ";
	cin >> b; cCuu sheep(b);

	cout << "\nNhap so luong con de: ";
	cin >> c; cDe goat(c);

	cout << "\n---GIA SUC DOI---\n";
	cow.keu();
	sheep.keu();
	goat.keu();
	

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

	return 0;




}