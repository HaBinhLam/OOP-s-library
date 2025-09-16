#include "cChuoi.h"
#include <iostream>

using namespace std;

int cChuoi::calculate_length(const char* s) {
	int len = 0;
	while (s[len] != '\0') {
		len++;
	}
	return len;
}

	//nhom ham khoi tao
cChuoi::cChuoi():str(nullptr), length(0){}

cChuoi::cChuoi(char* s, int len) {
	if (s) {
		length = (len > 0 ? len : calculate_length(s));
		str = new char[length + 1];
		for (int i = 0; i < length; i++) {
			str[i] = s[i];
		}
		str[length] = '\0';
	}
	else {
		length = 0;
		str = nullptr;
	}
}


	//nhom ham set/get
int cChuoi::getlength()const {
	return length;
}



	//nhom ham xu li
void cChuoi::nhap() {
	char temp[1000];
	cout << "Nhap chuoi: ";
	cin.getline(temp, 1000);
	length = calculate_length(temp);
	str = new char[length + 1];
	for (int i = 0; i < length; i++) {
		str[i] = temp[i];
	}
	str[length] = '\0';
}

void cChuoi::xuat() const {
	cout << str << endl;
}

cChuoi cChuoi::noi_chuoi(const cChuoi& s)const {
	int dodai_chuoimoi = length + s.length;
	char* chuoimoi = new char[dodai_chuoimoi + 1];
	for (int i = 0; i < length; i++) {
		chuoimoi[i] = str[i];
	}
	for (int i = 0; i < s.length; i++) {
		chuoimoi[length + i] = s.str[i];
	}
	chuoimoi[dodai_chuoimoi] = '\0';
	cChuoi result(chuoimoi, dodai_chuoimoi);
	delete[]chuoimoi;
	return result;
}

cChuoi cChuoi::dao_chuoi() {
	int dodai_chuoimoi = length;
	char* chuoimoi = new char[dodai_chuoimoi + 1];
	for (int i = 0; i < length; i++) {
		chuoimoi[i] = str[length - i - 1];
	}
	chuoimoi[dodai_chuoimoi] = '\0';
	cChuoi result(chuoimoi, dodai_chuoimoi);
	delete[] chuoimoi;
	return result;
}
cChuoi cChuoi::in_hoa() {
	int dodai_chuoimoi = length;
	char* chuoimoi = new char[dodai_chuoimoi + 1];

	for (int i = 0; i < length; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			chuoimoi[i] = str[i] - 32;
		}
		else
		{
			chuoimoi[i] = str[i];
		}
	}
	chuoimoi[dodai_chuoimoi] = '\0';
	cChuoi result(chuoimoi, dodai_chuoimoi);
	delete[] chuoimoi;
	return result;

}
cChuoi cChuoi::in_thuong() {
	int dodai_chuoimoi = length;
	char* chuoimoi = new char[dodai_chuoimoi + 1];

	for (int i = 0; i < length; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			chuoimoi[i] = str[i] + 32;
		}
		else {
			chuoimoi[i] = str[i];
		}
	}
	chuoimoi[dodai_chuoimoi] = '\0';
	cChuoi result(chuoimoi, dodai_chuoimoi);
	delete[] chuoimoi;
	return result;

}
cChuoi::~cChuoi() {
	delete[] str;
}


