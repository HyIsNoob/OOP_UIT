#pragma once
#include <iostream>
using namespace std;

class CDonThuc
{
private:
	float HeSo;
	int SoMu;
public:
	CDonThuc();
	CDonThuc(float, int);
	CDonThuc(const CDonThuc&);
	~CDonThuc();
	CDonThuc& operator=(const CDonThuc&);
};

