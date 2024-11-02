#pragma once
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class CNhanVien
{
protected:
	string HoTen;
	string NgaySinh;
	float LuongCoBan;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhLuong();
	virtual float TongLuong();
	virtual CNhanVien* TimKiem(string);
};

