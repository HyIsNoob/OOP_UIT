#pragma once
#include <iostream>
using namespace std;

class CDiemKhongGian
{
private:
	float x;
	float y;
	float z;
public:
	CDiemKhongGian();
	CDiemKhongGian(float, float, float);
	CDiemKhongGian(const CDiemKhongGian&);
	~CDiemKhongGian();
	CDiemKhongGian& operator=(const CDiemKhongGian&);
};

