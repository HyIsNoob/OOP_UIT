#pragma once
#include <iostream>
using namespace std;

class CDaThuc
{
private:
	float a[100];
	int n;
public:
	void RutGon();
	CDaThuc operator+(const CDaThuc&);
	CDaThuc operator-(const CDaThuc&);
	CDaThuc operator*(const CDaThuc&);
	CDaThuc operator/(const CDaThuc&);
	CDaThuc& operator+=(const CDaThuc&);
	CDaThuc& operator-=(const CDaThuc&);
	CDaThuc& operator*=(const CDaThuc&);
	CDaThuc& operator/=(const CDaThuc&);
	friend istream& operator>>(istream&, CDaThuc&);
	friend ostream& operator<<(ostream&, CDaThuc);
};

