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
};

