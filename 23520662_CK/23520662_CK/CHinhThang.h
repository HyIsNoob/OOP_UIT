#pragma once
#include "CTuGiac.h"

class CHinhThang:public CTuGiac
{
private:
	float DoDaiDayBe;
	float DoDaiDayLon;
	float DoDaiBenThuNhat;
	float DoDaiBenThuHai;
public:
	void Nhap() override;
	void Xuat() override;
	float XuatChuVi() override;
	float XuatDienTich() override;
	float TongDienTich() override;
};

