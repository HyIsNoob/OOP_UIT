#pragma once
#include "CTuGiac.h"

class CHinhBinhHanh:public CTuGiac
{
private:
	float DoDaiDay;
	float DoDaiBen;
public:
	void Nhap() override;
	void Xuat() override;
	float XuatChuVi() override;
	float XuatDienTich() override;
	float TongDienTich() override;
};

