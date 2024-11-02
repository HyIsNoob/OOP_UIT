#pragma once
#include <iostream>
#include <string>
using namespace std;

class CTuGiac
{
protected:
	float h;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float XuatChuVi();
	virtual float XuatDienTich();
	virtual float TongDienTich();
};

