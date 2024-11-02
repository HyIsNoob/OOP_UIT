#pragma once
#include "CDiem.h"
#include <iostream>
using namespace std;

class CTamGiac
{
private:
	CDiem A;
	CDiem B;
	CDiem C;
public:
	CTamGiac();
	CTamGiac(CDiem, CDiem, CDiem);
	CTamGiac(const CTamGiac&);
	~CTamGiac();
	CTamGiac& operator=(const CTamGiac&);
};

