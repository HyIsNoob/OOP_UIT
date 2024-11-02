#pragma once
#include "CNhanVien.h"

class CNhanVienSanXuat :public CNhanVien
{
private:
	int SoSanPham;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	CNhanVien* TimKiem(string);
};

