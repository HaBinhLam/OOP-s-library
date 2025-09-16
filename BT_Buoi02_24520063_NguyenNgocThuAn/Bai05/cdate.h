//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#pragma once

class cdate
{
private:
	short day, month, year;
	bool ngay_hople();

public:
	//nhom ham khoi tao
	cdate(short ngay=1, short thang=1 , short nam=0);
	
	//nhom ham get set
	short getday();
	short getmonth();
	short getyear();

	void setday(short ngay);
	void setmonth(short thang);
	void setyear(short nam);

	//nhom ham xu ly
	void nhap();
	void xuat_ngaythang(short x) const;
	void xuat() const;
	
	cdate tang(const cdate& date2) const;
	cdate giam(const cdate& date2) const;
	void tang_giam_ngaythangnam();
	int getdayofweek();
	bool kiemtranamnhuan();
	void thutrongtuan();



};

