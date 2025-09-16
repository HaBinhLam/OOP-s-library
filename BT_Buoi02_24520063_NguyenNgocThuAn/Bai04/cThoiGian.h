//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#pragma once
class cThoiGian
{
private:
	int giay;
	short gio, phut;
	//thời gian hợp lý
	void template_thoigian();
public:
	//nhom ham khoi tao
	cThoiGian(short hour = 0, short min = 0, int sec = 0);

	//nhom ham get/set
	short getGio() const;
	short getPhut() const;
	int getGiay() const;

	void setGio(const short& hour);
	void setPhut(const short& min);
	void setGiay(const int& sec);

	//nhom ham xu ly
	void nhap();
	void xuat() const;
	void giamthoigian(const cThoiGian& time2);
	void tangthoigian(const cThoiGian& time2);;
};

