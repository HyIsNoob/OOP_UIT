#pragma once
#include <iostream>
using namespace std;
class CDonThuc
{
private:
	int HeSo;
	int SoMu;
public:
	friend istream& operator>>(istream&, CDonThuc&);
	friend ostream& operator<<(ostream&, CDonThuc);
};

istream& operator>>(istream& m, CDonThuc& a) {
	m >> a.HeSo;
	m >> a.SoMu;
	return m;
}

ostream& operator<<(ostream& m, CDonThuc a) {
	m << a.HeSo << "x^" << a.SoMu;
	return m;
}
