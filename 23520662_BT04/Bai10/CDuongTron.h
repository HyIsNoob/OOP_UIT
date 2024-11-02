#pragma once
#include "CDiem.h"
#include <iostream>
using namespace std;

class CDuongTron
{
	private:
		CDiem I;
		float R;
	public:
		CDuongTron();
		CDuongTron(CDiem, float);
		CDuongTron(const CDuongTron&);
		~CDuongTron();
};

