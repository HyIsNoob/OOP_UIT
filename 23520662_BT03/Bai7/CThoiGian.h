#pragma once
#include <iostream>
using namespace std;
class CThoiGian
{
private:
	int Giay;
	int Phut;
	int Gio;
public:
	friend istream& operator>>(istream&, CThoiGian&);
	friend ostream& operator<<(ostream&, CThoiGian);
};

istream& operator>>(istream& m, CThoiGian& a) {
	m >> a.Giay;
	m >> a.Phut;
	m >> a.Gio;
	return m;
}

ostream& operator<<(ostream& m, CThoiGian a) {
	m << a.Giay << ":" << a.Phut << ":" << a.Gio;
	return m;
}
