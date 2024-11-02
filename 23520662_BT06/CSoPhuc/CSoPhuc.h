#pragma once
#include <iostream>
using namespace std;

class CSoPhuc
{
private:
	int Thuc;
	int Ao;
public:
	CSoPhuc();
	CSoPhuc(int, int);
	CSoPhuc(const CSoPhuc&);
	~CSoPhuc();
	CSoPhuc operator+(const CSoPhuc&);
	CSoPhuc operator-(const CSoPhuc&);
	CSoPhuc& operator=(const CSoPhuc&);
	CSoPhuc operator*(const CSoPhuc&);
	CSoPhuc operator/(const CSoPhuc&);
	CSoPhuc& operator+=(const CSoPhuc&);
	CSoPhuc& operator-=(const CSoPhuc&);
	CSoPhuc& operator*=(const CSoPhuc&);
	CSoPhuc& operator/=(const CSoPhuc&);
	friend istream& operator>>(istream&, CSoPhuc&);
	friend ostream& operator<<(ostream&, CSoPhuc);
};

