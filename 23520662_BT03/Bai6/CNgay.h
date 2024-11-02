#pragma once
#include <iostream>
using namespace std;

class CNgay {
private:
	int Ngay;
	int Thang;
	int Nam;
public:
	friend istream& operator>>(istream&, CNgay&);
	friend ostream& operator<<(ostream&, CNgay);
};

istream& operator>>(istream& m, CNgay& a) {
	m >> a.Ngay;
	m >> a.Thang;
	m >> a.Nam;
	return m;
}

ostream& operator<<(ostream& m, CNgay a) {
	return m << a.Ngay << "/" << a.Thang << "/" << a.Nam;
}

