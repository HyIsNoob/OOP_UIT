#pragma once
#include <iostream>

#include "CDuongThang.h"
using namespace std;

class CDuongTron {
private:
	int x1, y1;
	CDuongThang R;
public:
	friend istream& operator>>(istream&, CDuongTron&);
	friend ostream& operator<<(ostream&, CDuongTron);
};

istream& operator>>(istream& m, CDuongTron& a) {
	m >> a.x1;
	m >> a.y1;
	m >> a.R;
	return m;
}

ostream& operator<<(ostream& m, CDuongTron a) {
	m << "O: " << a.x1 << ", " << a.y1;
	m << a.R;
	return m;
}

