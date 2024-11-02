#include "CXeMay.h"
#include "CXe.h"

void CXeMay::Nhap() {
	CXe::Nhap();
	cout << "Nhap bien so xe: ";
	getline(cin, BienSoXe);
}

void CXeMay::Xuat() {
	CXe::Xuat();
	cout << "Bien so xe la: " << BienSoXe << endl;
}

float CXeMay::TongTien() {
	return ((float)5000 * (float)loai);
}

int CXeMay::DemXeMay() {
	return 1;
}