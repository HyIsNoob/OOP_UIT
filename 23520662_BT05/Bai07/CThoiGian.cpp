#include "CThoiGian.h"

CThoiGian::CThoiGian()
{
	Gio = 0;
	Phut = 0;
	Giay = 0;
	cout << "Phuong thuc thiet lap mac dinh." << endl;
}

CThoiGian::CThoiGian(int GioGio, int PhutPhut, int GiayGiay)
{
	Gio = GioGio;
	Phut = PhutPhut;
	Giay = GiayGiay;
	cout << "Phuong thuc thiet lap khi biet day du thong tin." << endl;
}

CThoiGian::CThoiGian(const CThoiGian& x)
{
	Gio = x.Gio;
	Phut = x.Phut;
	Giay = x.Giay;
	cout << "Phuong thuc thiet lap sao chep." << endl;
}

CThoiGian::~CThoiGian()
{
	cout << "Phuong thuc pha huy." << endl;
	return;
}

CThoiGian& CThoiGian::operator=(const CThoiGian& aa) {
	cout << "Phuong thuc gan." << endl;
	Gio = aa.Gio;
	Phut = aa.Phut;
	Giay = aa.Giay;
	return *this;
}