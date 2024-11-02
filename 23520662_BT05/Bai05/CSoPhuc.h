#pragma once
#include <iostream>
using namespace std;

class CSoPhuc
{
private:
	float Thuc;
	float Ao;
public:
	CSoPhuc();
	CSoPhuc(float, float);
	CSoPhuc(const CSoPhuc&);
	~CSoPhuc();
	CSoPhuc& operator=(const CSoPhuc&);
};

