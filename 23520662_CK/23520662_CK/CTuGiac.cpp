#include "CTuGiac.h"

void CTuGiac::Nhap() {
	cout << "Nhap chieu cao cua hinh: ";
	cin >> h; cin.ignore();
}

void CTuGiac::Xuat() {
	cout << "Chieu cao cua hinh la: " << h << endl;
}

float CTuGiac::XuatChuVi() {
	return 0;
}

float CTuGiac::XuatDienTich() {
	return 0;
}

float CTuGiac::TongDienTich() {
	return 0;
}