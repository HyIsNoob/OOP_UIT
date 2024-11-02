#pragma once
#include "CChiTiet.h"
#include <string>

class CChiTietPhuc :public CChiTiet
{
private:
	int n;
	CChiTiet* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhGiaTien();
	CChiTiet* TimKiem(string);
	int DemChiTietDon();
};

