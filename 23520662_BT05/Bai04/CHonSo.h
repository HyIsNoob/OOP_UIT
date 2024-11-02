#pragma once
#include <iostream>
using namespace std;

class CHonSo
{
private:
	int Tu;
	int Mau;
	int Nguyen;
public:
	CHonSo();
	CHonSo(int, int, int);
	CHonSo(const CHonSo&);
	~CHonSo();
	CHonSo& operator=(const CHonSo&);
};

