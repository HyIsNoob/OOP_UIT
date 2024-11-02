#pragma once
#include <iostream>
using namespace std;

class CDiem
{
private:
	int x;
	int y;
public:
	void Nhap();
	void Xuat();
};

void CDiem::Nhap()
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}

void CDiem::Xuat()
{
	cout << endl;
	cout << "x la: " << x;
	cout << endl << "y la: " << y << endl;
}

