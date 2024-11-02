#include "CSoPhuc.h"

CSoPhuc::CSoPhuc()
{
	Thuc = 0;
	Ao = 0;
	cout << "Phuong thuc thiet lap mac dinh." << endl;
}

CSoPhuc::CSoPhuc(float ThucThuc, float AoAo)
{
	Thuc = ThucThuc;
	Ao = AoAo;
	cout << "Phuong thuc thiet lap khi biet day du thong tin." << endl;
}

CSoPhuc::CSoPhuc(const CSoPhuc& x)
{
	Thuc = x.Thuc;
	Ao = x.Ao;
	cout << "Phuong thuc thiet lap sao chep." << endl;
}

CSoPhuc::~CSoPhuc()
{
	cout << "Phuong thuc pha huy." << endl;
	return;
}

CSoPhuc& CSoPhuc::operator=(const CSoPhuc& a) {
	cout << "Phuong than gan." << endl;
	Thuc = a.Thuc;
	Ao = a.Ao;
	return *this;
}