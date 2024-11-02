#pragma once
#include <iostream>
using namespace std;

class CSoPhuc
{
private:
	int Thuc;
	int Ao;
public:
	void Nhap();
	void TinhToan(CSoPhuc);
	void Xuat();
};

void CSoPhuc::Nhap()
{
	cout << "Nhap phan thuc: ";
	cin >> Thuc;
	cout << "Nhap phan ao: ";
	cin >> Ao;
}

void CSoPhuc::TinhToan(CSoPhuc A)
{
	cout << "Tong la: ";
	cout << Thuc + A.Thuc << " + " << Ao + A.Ao << "i" << endl;
	cout << "Hieu la: ";
	cout << Thuc - A.Thuc << " + " << Ao - A.Ao << "i" << endl;
	cout << "Tich la: ";
	cout << (Thuc * A.Thuc) - (Ao * A.Ao) << " + " << (Thuc * A.Ao + Ao * A.Thuc) << "i" << endl;
}

void CSoPhuc::Xuat()
{
	cout << "So phuc la: ";
	cout << Thuc << " + " << Ao << "i" << endl;
}

