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
	void Xuly(CPhanSo);
	void Xuat();
};

void CPhanSo::Nhap()
{
	cout << "Nhap tu: ";
	cin >> Tu;
	cout << "Nhap mau: ";
	cin >> Mau;
}

void CPhanSo::Xuly(CPhanSo A)
{
	int MauChung = A.Mau * Mau;
	cout << "Tong la: ";
	cout << Tu * A.Mau + A.Tu * Mau << "/" << MauChung << endl;
	cout << "Hieu la: ";
	cout << Tu * A.Mau - A.Tu * Mau << "/" << MauChung << endl;
	cout << "Tich la: ";
	cout << Tu * A.Tu << "/" << Mau * A.Mau << endl;
	cout << "Thuong la: ";
	cout << Tu * A.Mau << "/" << Mau * A.Tu << endl;
}

void CPhanSo::Xuat()
{
	cout << "Phan so la: ";
	cout << Tu << "/" << Mau;
	cout << endl;
}
