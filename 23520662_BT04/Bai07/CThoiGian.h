#pragma once
#include <iostream>
using namespace std;

class CThoiGian
{
	private:
		int Gio;
		int Phut;
		int Giay;
	public:
		CThoiGian();
		CThoiGian(int, int, int);
		CThoiGian(const CThoiGian&);
		~CThoiGian();
};

