//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#pragma once
class cBirth
{
private:
	short ngay, thang, nam;
public:
	//nhom ham khoi tao
	friend class cNhanVienVP;
	cBirth(short day = 1, short month = 1, short year = 1);

	//nhom ham get set
	void setngay(short& day);
	void setthang(short& month);
	void setnam(short& year);
	short getngay()const;
	short getthang()const;
	short getnam()const;

	//nhom ham xu li
	void nhap_birth();
	void xuat_birth()const;
	bool namnhuan()const;
	bool ngay_hople()const;

};


