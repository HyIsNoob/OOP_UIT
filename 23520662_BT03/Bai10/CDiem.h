#pragma once
#include <iostream>
using namespace std;

class CDiem {
private:
	int x;
	int y;
public:
	friend istream& operator>>(istream&, CDiem&);
	friend ostream& operator<<(ostream&, CDiem);
	CDiem operator+(const CDiem, const CDiem);
};

istream& operator>>(istream& m, CDiem& a) {
	m >> a.x;
	m >> a.y;
	return m;
}

ostream& operator<<(ostream& m, CDiem a) {
	return m << a.x << "\n" << a.y;
}

