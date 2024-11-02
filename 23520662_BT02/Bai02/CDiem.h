#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class CDiem
{
private:
	int x;
	int y;
public:
	void Nhap();
	void Xuat();
	float KhoangCach(CDiem);
};

void CDiem::Nhap()
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}

float CDiem::KhoangCach(CDiem A)
{
	float kq = sqrt(pow((x - A.x), 2) * pow((y - A.y), 2));
	return kq;
}

void CDiem::Xuat()
{
	cout << "Diem la: " << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y;
}

