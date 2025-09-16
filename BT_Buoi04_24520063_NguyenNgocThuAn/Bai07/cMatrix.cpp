//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include "cMatrix.h"

using namespace std;

cMatrix::cMatrix(int hang, int cot) : rows(hang), cols(cot), matran(rows, vector<double>(cols, 0.0)) {}

//nhom ham set get
void cMatrix::set_cot(int& x) {
	cols = x;
}
void cMatrix::set_hang(int& x) {
	rows = x;
}
int cMatrix::get_cot()const {
	return cols;
}
int cMatrix::get_hang()const {
	return rows;
}

//nhom ham xu li
istream& operator>>(std::istream& in, cMatrix& a) {
	cout << "Nhap so hang: ";
	in >> a.rows;
	cout << "Nhap so cot: ";
	in >> a.cols;
	a.matran.resize(a.rows);
	for (auto& row : a.matran) {
		row.resize(a.cols, 0.0);
	}

	for (int i = 0; i < a.rows; i++) {
		cout << "Hang thu " << i + 1 << endl;
		for (int j = 0; j < a.cols; j++) {
			cout << "Phan tu thu " << j + 1 << ": ";
			in >> a.matran[i][j];
		}
	}
	return in;

}
ostream& operator<<(ostream& out, cMatrix& a) {
	for (int i = 0; i < a.rows; i++) {
		for (int j = 0; j < a.cols; j++) {
			cout << a.matran[i][j] << " ";
		}
		cout << endl;
	}
	return out;
}

cMatrix cMatrix::operator*(const cMatrix& a) {
	if (cols != a.rows) {
		return cMatrix(1, 1);
	}
	cMatrix kq(rows, a.cols);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < a.cols; j++) {
			for (int k = 0; k < cols; k++) {
				kq.matran[i][j] += matran[i][k] * a.matran[k][j];
			}
		}
	}
	return kq;
}
cVector cMatrix::operator*(const cVector& a) {
	cVector kq(0);
	if (a.get_sochieu() != cols) {
		return kq;
	}
	else{
		kq.set_sochieu(a.get_sochieu());
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				kq.toado[i] += matran[i][j] * a.toado[j];
			}
		}
		return kq;
	}		
	
}
