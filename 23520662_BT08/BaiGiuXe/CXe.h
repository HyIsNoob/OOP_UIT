#pragma once
#include <iostream>
#include <string>
using namespace std;

class CXe
{
protected: 
	string MaSo;
	int loai;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float TongTien();
	virtual int DemXeMay();
};

