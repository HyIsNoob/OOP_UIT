#pragma once
#include <iostream>
using namespace std;

class CDonThuc
{
private:
	float HeSo;
	int SoMu;
public:
	CDonThuc();
	CDonThuc(int, int);
	CDonThuc(const CDonThuc&);
	~CDonThuc();
	CDonThuc& operator=(const CDonThuc&);
	CDonThuc operator*(const CDonThuc&);
	CDonThuc operator/(const CDonThuc&);
	CDonThuc& operator*=(const CDonThuc&);
	CDonThuc& operator/=(const CDonThuc&);
	friend istream& operator>>(istream&, CDonThuc&);
	friend ostream& operator<<(ostream&, CDonThuc);
};

