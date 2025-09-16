//MSSV: 24520063
//Ho ten: Nguyen Ngoc Thu An
//Lop: IT002.P26
#pragma once
class cSophuc
{
private:
	double thuc;
	double ao;
public:
	//nhóm hàm khởi tạo
	cSophuc(double real = 0, double image = 0);

	//nhóm hàm get/set
	double getthuc();
	double getao();

	void setthuc(const double& real);
	void setao(const double& image);

	//nhóm hàm xử lý
	void nhap();
	void xuat() const;

	cSophuc cong(const cSophuc& complex) const;
	cSophuc tru(const cSophuc& complex) const;
	cSophuc nhan(const cSophuc& complex) const;
	cSophuc chia(const cSophuc& complex) const;
}; 

