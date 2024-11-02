#pragma once
#include <iostream>
#include "CDiem.h"
using namespace std;

class CTamGiac
{
private:
	CDiem A;
	CDiem B;
	CDiem C;
public:
	friend istream& operator>>(istream&, CTamGiac&);
	friend ostream& operator<<(ostream&, CTamGiac);
};

istream& operator>>(istream& m, CTamGiac& a) {
	m >> a.A >> a.B >> a.C;
	return m;
}

ostream& operator<<(ostream& m, CTamGiac a) {
	m << a.A << endl;
	m << a.B << endl;
	m << a.C;
	return m;
}

