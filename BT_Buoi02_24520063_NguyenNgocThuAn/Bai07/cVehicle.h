//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#include <iostream>

using namespace std;

class cVehicle
{
private:
	string owner;
	string type;
	double cost;
	int xylanh;
public:
	//nhom ham khoi tao
	cVehicle(string o = "", string t = "", double c = 0, int x = 0);

	//nhom ham get/set
	string getowner();
	string gettype();
	double getcost();
	int getxylanh();

	void setowner(string name);
	void settype(string name);
	void setcost(double money);
	void setxylanh(int dungtich);

	//nhom ham xu li
	void nhap();
	void xuat();
	double tinh_thue()const;


};