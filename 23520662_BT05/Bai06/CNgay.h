#pragma once
#include <iostream>
using namespace std;

class CNgay
{
private:
	int Ngay;
	int Thang;
	int Nam;
public:
	CNgay();
	CNgay(int, int, int);
	CNgay(const CNgay&);
	~CNgay();
	CNgay& operator=(const CNgay&);
};

