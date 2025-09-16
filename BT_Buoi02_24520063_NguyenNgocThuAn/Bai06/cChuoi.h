//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#pragma once

class cChuoi
{
private:
	char* str;
	int length;

	int calculate_length(const char* s);

public:
	//nhom ham khoi tao
	cChuoi();
	cChuoi(char* s, int len);

	//nhom ham set/get
	int getlength()const;



	//nhom ham xu li
	void nhap();
	void xuat() const;
	cChuoi noi_chuoi(const cChuoi& s)const;
	cChuoi dao_chuoi();
	cChuoi in_hoa();
	cChuoi in_thuong();

	~cChuoi();
	
	

	
};

