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
	int KhoangCach(CDiem);
	int TrongTam1(CDiem, CDiem);
	int TrongTam2(CDiem, CDiem);
};

int CDiem::TrongTam1(CDiem A, CDiem B)
{
	return (x + A.x + B.x) / 3;
}

int CDiem::TrongTam2(CDiem A, CDiem B)
{
	return (y + A.y + B.y) / 3;
}

int CDiem::KhoangCach(CDiem A)
{
	return sqrt(pow((A.x - x), 2) + pow((A.y - y), 2));
}

void CDiem::Nhap()
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}

void CDiem::Xuat()
{
	cout << "x la: " << x << endl;
	cout << "y la: " << y;
}

