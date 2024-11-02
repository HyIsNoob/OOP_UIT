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
	void XuLy(CPhanSo);
	void Xuat();
};

void CPhanSo::Nhap()
{
	cout << "Nhap tu: ";
	cin >> Tu;
	cout << "Nhap mau: ";
	cin >> Mau;
}

void CPhanSo::XuLy(CPhanSo A)
{
	if ((Tu / Mau) > (A.Tu / A.Mau))
		cout << "Phan so " << Tu << "/" << Mau << " lon hon " << A.Tu << "/" << A.Mau << endl;
	else
		cout << "Phan so " << A.Tu << "/" << A.Mau << " lon hon " << Tu << "/" << Mau << endl;
}

void CPhanSo::Xuat()
{
	cout << "Xuat phan so: ";
	cout << Tu << "/" << Mau;
	cout << endl;
}

