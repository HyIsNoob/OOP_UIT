#pragma once
#include "CDoiTuongLuuTru.h"

class CTapTin :public CDoiTuongLuuTru
{
private:
	float DungLuong;
public:
	void Nhap();
	void Xuat();
	float TongDungLuong();
	int DemTapTin();
	int DemThuMuc();
};

