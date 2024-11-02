#include "CDuongThang.h"

CDuongThang::CDuongThang()
{
	a = 0;
	b = 0;
	cout << "Phuong thuc thiet lap mac dinh." << endl;
}

CDuongThang::CDuongThang(float aa, float bb)
{
	a = aa;
	b = bb;
	cout << "Phuong thuc thiet lap khi biet day du thong tin." << endl;
}

CDuongThang::CDuongThang(const CDuongThang& x)
{
	a = x.a;
	b = x.b;
	cout << "Phuong thuc thiet lap sao chep." << endl;
}

CDuongThang::~CDuongThang()
{
	cout << "Phuong thuc pha huy." << endl;
	return;
}

CDuongThang& CDuongThang::operator=(const CDuongThang& x) {
	cout << "Phuong thuc gan." << endl;
	a = x.a;
	b = x.b;
	return *this;
}