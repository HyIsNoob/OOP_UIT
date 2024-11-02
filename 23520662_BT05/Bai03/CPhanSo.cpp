#include "CPhanSo.h"

CPhanSo::CPhanSo()
{
	Tu = 0;
	Mau = 1;
	cout << "Phuong thuc thiet lap mac dinh." << endl;
}

CPhanSo::CPhanSo(int TuTu, int MauMau)
{
	Tu = TuTu;
	Mau = MauMau;
	cout << "Phuong thuc thiet lap khi biet day du thong tin." << endl;
}

CPhanSo::CPhanSo(const CPhanSo& ps)
{
	Tu = ps.Tu;
	Mau = ps.Mau;
	cout << "Phuong thuc thiet lap sao chep." << endl;
}

CPhanSo::~CPhanSo()
{
	cout << "Phuong thuc pha huy." << endl;
	return;
}

CPhanSo& CPhanSo::operator=(const CPhanSo& a) {
	cout << "Phuong thuc gan." << endl;
	Tu = a.Tu;
	Mau = a.Mau;
	return *this;
}
