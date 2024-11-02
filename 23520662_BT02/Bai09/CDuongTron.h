#pragma once
#include <iostream>
#include "CDiem.h"
#include <math.h>
#define PI 3.141592654
using namespace std;


class CDuongTron
{
private:
	CDiem O;
	int R;
public:
	void Nhap();
	void Xuat();
	void TinhToan();
};

void CDuongTron::TinhToan()
{
	cout << "Dien Tich = " << PI * pow(R, 2) << endl;
	cout << "Chu Vi = " << 2 * PI * R << endl;
}

void CDuongTron::Nhap()
{
	cout << "Nhap tam: " << endl;
	O.Nhap();
	cout << "Nhap ban kinh: ";
	cin >> R;
}

void CDuongTron::Xuat()
{
	cout << "Toa do tam la: ";
	O.Xuat();
	cout << "Ban kinh la: ";
	cout << R;
	cout << endl;
}
