//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include <iostream>
#include "cDateTime.h"

using namespace std;

int main()
{
	cDateTime a;
	cin >> a;
	cout << "\n\n";

	cDateTime b = a;
	--b;
	cout << "THAO TAC GIAM 1s\n";
	cout << b;

	cDateTime c = a;
	++c;
	cout << "\n\n\nTHAO TAC TANG 1s\n";
	cout << c;

	cDateTime d = a;
	int x;
	cout << "\n\nNHAP SO GIAY (>0 neu muon tang) (<0 neu muon giam): ";
	cin >> x;
	if (x > 0) {
		for (int i = 0; i < x; i++) {
			++d;
		}
	}
	else {
		int y = abs(x);
		for (int i = 0; i < y; i++) {
			--d;
		}
	}
	cout << "THOI GIAN SAU KHI " << ((x > 0) ? "TANG " : "GIAM ") << abs(x) << " giay la:\n";
	cout << d;


	cout << "\n\n\n";

	return 0;

}