//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26

#include <iostream>
#include "cTime.h"

using namespace std;

int main()
{
	cTime a;
	cout << "Nhap thoi gian.\n";
	cin >> a;

	cTime b = a;
	++b;
	cout << "\nThoi gian sau khi tang 1 giay: " << b;

	cTime c = a;
	--c;
	cout << "\nThoi gian sau khi giam 1 giay: " << c;

	cTime d = a;
	int x;
	do{
		cout << "\n\nNhap so giay (>0 neu muon tang) hoac (<0 neu muon giam): ";
		cin >> x;
		if (x == 0) cout << "Nhap lai, x!=0\n";
	} while (x == 0);

	cout << "\nThoi gian sau khi " << ((x > 0) ? "tang " : "giam ") << abs(x) << " giay: " << ((x>0) ? d + x : d - x);
	cout << "\n\n\n";

	return 0;

}