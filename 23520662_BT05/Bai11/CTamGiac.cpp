#include "CTamGiac.h"

CTamGiac::CTamGiac()
{
	cout << "Phuong thuc thiet lap mac dinh lop tam giac." << endl;
}

CTamGiac::CTamGiac(CDiem AA, CDiem BB, CDiem CC)
{
	A = AA;
	B = BB;
	C = CC;
	cout << "Phuong thuc thiet lap khi biet day du thong tin lop tam giac." << endl;
}

CTamGiac::CTamGiac(const CTamGiac& tg)
{
	A = tg.A;
	B = tg.B;
	C = tg.C;
	cout << "Phuong thuc thiet lap sao chep lop tam giac." << endl;
}

CTamGiac::~CTamGiac()
{
	cout << "Phuong thuc pha huy lop tam giac." << endl;
	return;
}

CTamGiac& CTamGiac::operator=(const CTamGiac& a) {
	cout << "Phuong thuc gan Tam Giac. \n";
	A = a.A;
	B = a.B;
	C = a.C;
	return *this;
}