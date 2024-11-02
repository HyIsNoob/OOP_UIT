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
	return m << a.Tu << "/" << a.Mau;
}

class CHonSo {
private:
	CPhanSo PS;
	int PN;
public:
	friend istream& operator>>(istream&, CHonSo&);
	friend ostream& operator<<(ostream&, CHonSo);
};

istream& operator>>(istream& m, CHonSo& a) {
	m >> a.PN;
	m >> a.PS;
	return m;
}

ostream& operator<<(ostream& m, CHonSo a) {
	return m << a.PN << a.PS;
}

