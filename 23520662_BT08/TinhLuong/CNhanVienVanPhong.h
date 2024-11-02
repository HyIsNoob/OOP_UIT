#pragma once
#include "CNhanVien.h"

class CNhanVienVanPhong :public CNhanVien
{
private:
	int SoNgaylamViec;
	float TroCap;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	CNhanVien* TimKiem(string);
};

