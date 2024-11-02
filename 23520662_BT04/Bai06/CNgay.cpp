#include "CNgay.h"

CNgay::CNgay()
{
	Ngay = 1;
	Thang = 1;
	Nam = 1;
	cout << "Phuong thuc thiet lap mac dinh." << endl;
}

CNgay::CNgay(int ng, int th, int nm)
{
	Ngay = ng;
	Thang = th;
	Nam = nm;
	cout << "Phuong thuc thiet lap khi biet day du thong tin." << endl;
}

CNgay::CNgay(const CNgay& x)
{
	Ngay = x.Ngay;
	Thang = x.Thang;
	Nam = x.Nam;
	cout << "Phuong thuc thiet lap sao chep." << endl;
}

CNgay::~CNgay()
{
	cout << "Phuong thuc pha huy." << endl;
	return;
}