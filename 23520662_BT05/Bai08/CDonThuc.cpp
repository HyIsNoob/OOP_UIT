#include "CDonThuc.h"

CDonThuc::CDonThuc()
{
	HeSo = 0;
	SoMu = 0;
	cout << "Phuong thuc thiet lap mac dinh." << endl;
}

CDonThuc::CDonThuc(float heSo, int Mu)
{
	HeSo = heSo;
	SoMu = Mu;
	cout << "Phuong thuc thiet lap khi biet day du thong tin." << endl;
}

CDonThuc::CDonThuc(const CDonThuc& f)
{
	HeSo = f.HeSo;
	SoMu = f.SoMu;
	cout << "Phuong thuc thiet lap sao chep." << endl;
}

CDonThuc::~CDonThuc()
{
	cout << "Phuong thuc pha huy." << endl;
	return;
}

CDonThuc& CDonThuc::operator=(const CDonThuc& a) {
	cout << "Phuong thuc gan." << endl;
	HeSo = a.HeSo;
	SoMu = a.SoMu;
	return *this;
}