//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#include "cArray.h"

using namespace std;

cArray::cArray(int n, int min_giatri, int max_giatri) {
	if (n > 0) {
		a.resize(n);
		srand(time(0));
		for (int i = 0; i < n; i++) {
			a[i] = rand() % (max_giatri-min_giatri+1) - min_giatri;
		}
	}
}

//nhom ham set/get

//nhom ham xu li
void cArray::xuat_mang()const {
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
int cArray::dem_solanxuathien(const int& x) {
	int dem = 0; 
	for (int i = 0; i < a.size(); i++) {
		if (x == a[i]) {
			dem++;
		}
	}
	return dem;
}
bool cArray::mang_tangdan()const {
	for (int i = 0; i < a.size()-1; i++) {
		if (a[i] >= a[i + 1]) {
			return 0;
		}
	}
	return 1;
}
int cArray::sole_nhonhat()const {
	int start = -1;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] % 2 != 0) {
			start = i;
			break;
		}
	}
	if (start==-1) {
		return 0;
	}
	else {
		int sole = a[start];
		for (int i = start + 1; i < a.size(); i++) {
			if (a[i] % 2 != 0 && i < sole) {
				sole = a[i];
			}
		}
		return sole;

	}
}
bool cArray::songuyento(int n)const {
	if (n <= 1) return 0;
	if (n == 2) return 1;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) return 0;
		}
		return 1;
	}
}

int cArray::songuyento_lonnhat()const {
	int start = -1;
	for (int i = 0; i < a.size(); i++) {
		if (songuyento(a[i])) {
			start = i;
			break;
		}
	}
	if (start == -1) {
		return 0;
	}
	else {
		int snt = a[start];
		for (int i = start + 1; i < a.size(); i++) {
			if (songuyento(a[i])&&a[i]>snt) {
				snt = a[i];
			}
		}
		return snt;

	}
}
void cArray::sapxep_tangdan() {
	sort(a.begin(), a.end());
}
void cArray :: sapxep_giamdan() {
	//bubble sort
	for (int i = 0; i < a.size() - 1; i++) {
		for (int j = 0; j < a.size() - i - 1; j++) {
			if (a[j] < a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
	
}

