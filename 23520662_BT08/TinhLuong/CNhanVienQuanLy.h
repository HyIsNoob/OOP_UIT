#pragma once
#include "CNhanVien.h"

class CNhanVienQuanLy :public CNhanVien
{
private:
	int HeSoChucVu;
	float Thuong;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	CNhanVien* TimKiem(string);
};

