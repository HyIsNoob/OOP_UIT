#pragma once
#include <iostream>
using namespace std;

class CPhanSo
{
private:
	int Tu;
	int Mau;
public:
	CPhanSo();
	CPhanSo(int, int);
	CPhanSo(const CPhanSo&);
	~CPhanSo();
	CPhanSo operator+(const CPhanSo&);
	CPhanSo operator-(const CPhanSo&);
	CPhanSo& operator=(const CPhanSo&);
	CPhanSo operator*(const CPhanSo&);
	CPhanSo operator/(const CPhanSo&);
	CPhanSo& operator+=(const CPhanSo&);
	CPhanSo& operator-=(const CPhanSo&);
	CPhanSo& operator*=(const CPhanSo&);
	CPhanSo& operator/=(const CPhanSo&);
	CPhanSo& operator++(int);
	CPhanSo& operator--(int);
	friend istream& operator>>(istream&, CPhanSo&);
	friend ostream& operator<<(ostream&, CPhanSo);
};

