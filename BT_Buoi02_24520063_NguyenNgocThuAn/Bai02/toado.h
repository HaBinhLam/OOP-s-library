//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#pragma once
class toado
{
private:
	double hoanhdo, tungdo;

public:
	//nhóm hàm khởi tạo
	toado(double hoanh=0, double tung=0) : hoanhdo(hoanh), tungdo(tung) {}

	//nhóm hàm get/set
	double gethoanh() const;
	double gettung() const;

	void sethoanh(const double& hoanh);
	void settung(const double& tung);

	//nhóm hàm xử lý
	void nhap();
	void nhapvectortinhtien();
	void xuat() const;
	toado tinhtien(const toado& d1) const;


};

