#pragma once
#include <iostream>
using namespace std;

class CPhanSo
{
private:
	int Tu;
	int Mau;
public:
	void Nhap();
	void Xuly();
	void Xuat();
};

void CPhanSo::Nhap()
{
	cout << "Nhap tu: ";
	cin >> Tu;
	cout << "Nhap mau: ";
	cin >> Mau;
}

void CPhanSo::Xuly()
{
	if ((Tu * Mau) > 0)
		cout << "Phan so duong";
	else if ((Tu * Mau) < 0)
		cout << "Phan so am";
	else
		cout << "Phan so bang 0";
	cout << endl;
}

void CPhanSo::Xuat()
{
	cout << "Phan so la: ";
	cout << Tu << "/" << Mau;
}
