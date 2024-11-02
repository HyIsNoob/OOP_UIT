#pragma once
#include <iostream>
using namespace std;

class CPhanSo {
private:
	int Tu;
	int Mau;
public:
	friend istream& operator>>(istream&, CPhanSo&);
	friend ostream& operator<<(ostream&, CPhanSo);
};

istream& operator>>(istream& m, CPhanSo& a) {
	m >> a.Tu;
	m >> a.Mau;
	return m;
}

ostream& operator<<(ostream& m, CPhanSo a) {
	return m << a.Tu << "\n" << a.Mau;
}

