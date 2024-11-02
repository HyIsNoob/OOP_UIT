#include "CXeDap.h"
#include "CXe.h"

void CXeDap::Nhap() {
	CXe::Nhap();
}

void CXeDap::Xuat() {
	CXe::Xuat();
}

float CXeDap::TongTien() {
	return ((float)3000 * (float)loai);
}

int CXeDap::DemXeMay() {
	return 0;
}
