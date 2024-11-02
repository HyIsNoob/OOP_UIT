#pragma once
#include <iostream>
using namespace std;
class CHinhCau
{
private:
	int x1, y1;
	int x2, y2;
	int x3, y3;
	int R;
public:
	friend istream& operator>>(istream&, CHinhCau&);
	friend ostream& operator<<(ostream&, CHinhCau);
};

istream& operator>>(istream& m, CHinhCau& a) {
	cout << "Nhap x: ";
	m >> a.x1 >> a.y1;
	cout << "Nhap y: ";
	m >> a.x2 >> a.y2;
	cout << "Nhap z: ";
	m >> a.x3 >> a.y3;
	cout << "Nhap R: ";
	m >> a.R;
	return m;
}

ostream& operator<<(ostream& m, CHinhCau a) {
	m << "x: ";
	m << a.x1 << a.y1;
	m << "y: ";
	m << a.x2 << a.y2;
	m << "z: ";
	m << a.x3 << a.y3;
	m << "R = ";
	m << a.R;
	return m;
}

