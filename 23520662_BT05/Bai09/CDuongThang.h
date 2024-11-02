#pragma once
#include <iostream>
using namespace std;

class CDuongThang
{
private:
	float a;
	float b;
public:
	CDuongThang();
	CDuongThang(float, float);
	CDuongThang(const CDuongThang&);
	~CDuongThang();
	CDuongThang& operator=(const CDuongThang&);
};

