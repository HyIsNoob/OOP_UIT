#pragma once
#include "CTuGiac.h"

class CMatPhang
{
private:
	int n;
	CTuGiac* ds[100];
public:
	void Nhap();
	void Xuat();
	float XuatChuVi();
	float XuatDienTich();
	float TongDienTich();
};

