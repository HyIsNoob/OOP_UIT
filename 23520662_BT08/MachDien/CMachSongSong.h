#pragma once
#include "CMachDien.h"

class CMachSongSong:public CMachDien{
	private:
		int n;
		CMachDien *ds[100];
	public:
		virtual void Nhap();
		virtual void Xuat();
		virtual float TinhDienTro();
};