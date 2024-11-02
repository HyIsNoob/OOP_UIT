#pragma once
#include <iostream>
#include "CDiem.h"
#include <math.h>
using namespace std;
class CDuongThang
{
private:
	CDiem A;
	CDiem B;
public:
	friend istream& operator>>(istream&, CDuongThang&);
	friend ostream& operator<<(ostream&, CDuongThang);
};

istream& operator>>(istream& m, CDuongThang& a) {
	m >> a.A;
	m >> a.B;
	return m;
}

ostream& operator<<(ostream& m, CDuongThang a) {
	m << "Do dai doan thang AB la: ";
	m << "A: " << a.A;
	m << endl << "B: " << a.B;
	return m;
}
