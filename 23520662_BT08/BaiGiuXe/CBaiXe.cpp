#include "CBaiXe.h"
#include "CXe.h"
#include "CXeMay.h"
#include "CXeDap.h"

void CBaiXe::Nhap() {
	cout << "Nhap so luong the xe: ";
	cin >> n; cin.ignore();
	int loaixe;
	for (int i = 0; i < n; i++) {
		cout << "Nhap loai xe (0.Xe dap, 1.Xe may): ";
		cin >> loaixe; cin.ignore();
		if (loaixe == 0)
			ds[i] = new CXeDap;
		else
			ds[i] = new CXeMay;
		ds[i]->Nhap();
	}
}

void CBaiXe::Xuat() {
	cout << "Danh sach cac the dang trong bai la: " << endl;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}

float CBaiXe::TongTien() {
	int Tong = 0;
	for (int i = 0; i < n; i++)
		Tong = Tong + ds[i]->TongTien();
	return Tong;
}

int CBaiXe::DemXeMay() {
	int dem = 0;
	for (int i = 0; i < n; i++)
		dem = dem + ds[i]->DemXeMay();
	return dem;
}