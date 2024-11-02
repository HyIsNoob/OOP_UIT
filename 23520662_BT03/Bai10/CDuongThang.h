#pragma once
#include <iostream>
#include <math.h>
using namespace std;
class CDuongThang
{
private:
	int x1, y1;
	int x2, y2;
public:
	friend istream& operator>>(istream&, CDuongThang&);
	friend ostream& operator<<(ostream&, CDuongThang);
};

istream& operator>>(istream& m, CDuongThang& a) {
	m >> a.x1 >> a.y1;
	m >> a.x2 >> a.y2;
	return m;
}

ostream& operator<<(ostream& m, CDuongThang a) {
	m << "Do dai doan thang la: ";
	cout << sqrt(pow(a.x2 - a.x1, 2) + pow(a.y2 - a.y1, 2));
	return m;
}
