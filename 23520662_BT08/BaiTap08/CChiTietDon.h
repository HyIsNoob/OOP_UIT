#pragma once
#include "CChiTiet.h"
using namespace std;

class CChiTietDon :public CChiTiet
{
private:
	float GiaTien;
public:
	void Nhap();
	void Xuat();
	float TinhGiaTien();
	CChiTiet* TimKiem(string);
	int DemChiTietDon();
};

