//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include <iostream>
#include "cMatrix.h"
#include "cVector.h"
#include <vector>
using namespace std;

int main()
{
	cMatrix a, b;
	cout << "Nhap ma tran thu nhat:\n";
	cin >> a;
	cout << "Nhap ma tran thu hai:\n";
	cin >> b;

	int n;
	cout << "Nhap so chieu vector: ";
	cin >> n;

	cVector vec(n);
	cout << "Nhap vector:\n";
	cin >> vec;

	cout << "\nTich 2 ma tran:\n";
	cMatrix kq = a * b;
	if (kq.get_hang() == kq.get_cot() && kq.get_cot() == 1) {
		cout << "Khong the nhan 2 ma tran, so cot ma tran thu nhat != so hang ma tran thu hai.\n";
	}
	else {
		cout << kq;
	}

	cout << "\nTich ma tran thu nhat voi vector:\n";
	cVector result = a * vec;
	if (result.get_sochieu() == 0) {
		cout << "Khong the nhan ma tran va vector, so cot ma tran != so phan tu cua vector.";
	}
	else {
		cout << result;
	}
	

	cout << "\nTich ma tran thu hai voi vector:\n";
	result = b * vec;
	if (result.get_sochieu() == 0) {
		cout << "Khong the nhan ma tran va vector, so cot ma tran != so phan tu cua vector.";
	}
	else {
		cout << result;
	}

	cout << "\n\n\n";
	return 0;
}