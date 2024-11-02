#pragma once
#include <iostream>
using namespace std;

class CHonSo
{
private:
	int HeSo;
	int Tu;
	int Mau;
public:
	bool operator>(const CHonSo&);
	bool operator<(const CHonSo&);
	bool operator>=(const CHonSo&);
	bool operator<=(const CHonSo&);
	bool operator==(const CHonSo&);
	bool operator!=(const CHonSo&);
	friend istream& operator>>(istream&, CHonSo&);
	friend ostream& operator<<(ostream&, CHonSo);
};

