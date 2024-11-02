#pragma once
#include <iostream>
using namespace std;

class CSoPhuc {
private:
	int Thuc;
	int Ao;
public:
	friend istream& operator>>(istream&, CSoPhuc&);
	friend ostream& operator<<(ostream&, CSoPhuc);
};

istream& operator>>(istream& m, CSoPhuc& a) {
	m >> a.Thuc;
	m >> a.Ao;
	return m;
}

ostream& operator<<(ostream& m, CSoPhuc a) {
	return m << a.Thuc << " + " << a.Ao << "i";
}

