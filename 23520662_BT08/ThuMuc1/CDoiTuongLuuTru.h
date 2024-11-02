#pragma once
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class CDoiTuongLuuTru
{
protected:
	string ten;
	string NgayThangTao;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float TongDungLuong();
	virtual int DemTapTin();
	virtual int DemThuMuc();
};

