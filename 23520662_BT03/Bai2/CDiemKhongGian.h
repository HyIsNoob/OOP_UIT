#pragma once
#include <iostream>
using namespace std;

class CDiemKhongGian
{
private:
	int x;
	int y;
	int z;
public:
	friend istream& operator>>(istream&, CDiemKhongGian&);
	friend ostream& operator<<(ostream&, CDiemKhongGian);
};

istream& operator>>(istream& m, CDiemKhongGian& a) {
	m >> a.x >> a.y >> a.z;
	return m;
}

ostream& operator<<(ostream& m, CDiemKhongGian a) {
	m << a.x << a.y << a.z;
	return m;
}

