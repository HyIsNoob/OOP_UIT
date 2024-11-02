#include "CHonSo.h"

CHonSo::CHonSo()
{
	Nguyen = 0;
	Tu = 0;
	Mau = 1;
	cout << "Phuong thuc thiet lap mac dinh." << endl;
}

CHonSo::CHonSo(int NguyenNguyen, int TuTu, int MauMau)
{
	Nguyen = NguyenNguyen;
	Tu = TuTu;
	Mau = MauMau;
	cout << "Phuong thuc thiet lap khi biet day du thong tin." << endl;
}

CHonSo::CHonSo(const CHonSo& hs)
{
	Nguyen = hs.Nguyen;
	Tu = hs.Tu;
	Mau = hs.Mau;
	cout << "Phuong thuc thiet lap sao chep." << endl;
}

CHonSo::~CHonSo()
{
	cout << "Phuong thuc pha huy." << endl;
	return;
}

CHonSo& CHonSo::operator=(const CHonSo& a) {
	cout << "Phuong thuc gan. " << endl;
	Nguyen = a.Nguyen;
	Tu = a.Tu;
	Mau = a.Mau;
	return *this;
}