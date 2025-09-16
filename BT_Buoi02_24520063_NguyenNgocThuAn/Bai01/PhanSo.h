//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#pragma once

class PhanSo
{
private:
	int tuso;
	int mauso;
	int ucln(int a, int b);
	void rutgon();

public:
	//nhóm hàm khởi tạo
	PhanSo(int tu = 0, int mau = 1);

	//nhóm hàm get/set
	int getTu() const;
	int getMau() const;
	void setTu(int tu);
	void setMau(int mau);

	//nhóm hàm xử lý
	void nhap();
	void xuat() ;


	PhanSo cong(const PhanSo& ps) const;
	PhanSo tru(const PhanSo& ps) const;
	PhanSo nhan(const PhanSo& ps) const;
	PhanSo chia(const PhanSo& ps) const;
};

