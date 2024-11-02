#pragma once
#include "CXe.h"
#include "CXeMay.h"
#include "CXeDap.h"

class CBaiXe
{
private:
	int n;
	CXe *ds[100];
public:
	void Nhap();
	void Xuat();
	float TongTien();
	int DemXeMay();
};

