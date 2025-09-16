//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26
#pragma once
class Diem
{
private: 
	double hoanhdo, tungdo;
public:
	friend class cDaGiac;
	//nhom ham khoi tao
	Diem(double hoanh = 0, double tung = 0);

	//nhom ham set/get
	void sethoanh(const double& a);
	void settung(const double& a);
	double gethoanh();
	double gettung();

	//nhom ham xu li
	void nhap_diem();
	void xuat_diem()const;
	double tinh_khoangcach(const Diem& d2);
	void nhap_vectortinhtien();
	Diem tinhtien_diem(const Diem& d2);
	Diem quay_goc(const double& goc);
	Diem phongto_diem(const Diem& trongtam, const double& k);

};

