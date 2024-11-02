#pragma once
#include <string.h>
#include <iostream>
#include <string>
using namespace std;

class CChiTiet
{
protected:
	string MaSo;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhGiaTien();
	virtual CChiTiet* TimKiem(string);
	virtual int DemChiTietDon();
};

