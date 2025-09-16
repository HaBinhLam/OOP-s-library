//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include <iostream>
#include "cDate.h"

using namespace std;

int main()
{
	cDate a, b;
	cout << "NHAP NGAY GUI TIEN\n";
	cin >> a;
	cout << "NHAP NGAY RUT TIEN\n";
	cin >> b;
	double x, y;
	cout << "Nhap so tien gui vao ngan hang (VND): ";
	cin >> y;
	cout << "Nhap lai suat ngan hang trong 1 nam (VD:0.05): ";
	cin >> x;

	cout << "\nKHOANG CACH GIUA 2 NGAY: " << a.khoangcach_2date(b) <<" ngay\n";

	cout << "\nLAI SUAT TIEN GUI NGAN HANG: " << b.laisuat_nganhang(x,y,a) <<" VND\n";

	cDate c = a;
	cDate d = b;
	cout << "\nTHAO TAC TANG 1 NGAY:\n";
	++c;
	cout << "\nNgay gui: " << c;
	++d;
	cout << "\nNgay rut: " << d;

	cDate e = a;
	cDate f = b;
	cout << "\n\nTHAO TAC GIAM 1 NGAY:\n";
	--e;
	cout << "\nNgay gui: " << e;
	--f;
	cout << "\nNgay rut: " << f;


	cDate g = a;
	cDate h = b;
	int z;
	cout << "\nNHAP SO NGAY (>0 neu muon tang) (<0 neu muon giam): ";
	cin >> z;

	cout << "\nSAU KHI " << ((z > 0) ? "TANG " : "GIAM ") << abs(z) << " NGAY:\n";
	if (z > 0) {
		g = g + z;
		h = h + z;
	}
	else {
		z = abs(z);
		g = g - z;
		h = h - z;
	}

	cout << "\nNgay gui: " << g;
	cout << "\nNgay rut: " << h;
	
	


	cout << "\n\n\n";
	return 0;


}