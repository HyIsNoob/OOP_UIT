#pragma once
#include <iostream>
using namespace std;

class CPhanSo
{
private:
	int Tu;
	int Mau;
public:
	bool operator>(const CPhanSo&);
	bool operator<(const CPhanSo&);
	bool operator>=(const CPhanSo&);
	bool operator<=(const CPhanSo&);
	bool operator==(const CPhanSo&);
	bool operator!=(const CPhanSo&);
	friend istream& operator>>(istream&, CPhanSo&);
	friend ostream& operator<<(ostream&, CPhanSo);
};

