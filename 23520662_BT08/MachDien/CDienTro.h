#pragma once
#include "CMachDien.h"

class CDienTro:public CMachDien{
	private:
		string MaSo;
		int DienTro;
	public:
		virtual void Nhap();
		virtual void Xuat();
		virtual float TinhDienTro();
};