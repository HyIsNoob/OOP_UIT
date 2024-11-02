#pragma once
#include "CChiTiet.h"
#include "CChiTietDon.h"
#include "CChiTietPhuc.h"

class CMay
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

