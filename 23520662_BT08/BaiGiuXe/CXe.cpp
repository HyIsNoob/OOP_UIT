#include "CXe.h"

void CXe::Nhap() {
	cout << "Nhap ma so xe: ";
	getline(cin, MaSo);
	cout << "Nhap loai the (0.Can bo, 1.Sinh vien, 2.Khach vang lai): ";
	cin >> loai; cin.ignore();
	switch (loai) {
	case 0:
		break;
	case 1:
		break;
	default:
		loai = 2;
		break;
	}
}

void CXe::Xuat() {
	cout << "Ma so xe la: " << MaSo << endl;
	cout << "Loai the la: ";
	switch (loai) {
	case 0:
		cout << "Can bo" << endl;
		break;
	case 1:
		cout << "Sinh vien" << endl;
		break;
	default:
		cout << "Khach vang lai" << endl;
		break;
	}
}

float CXe::TongTien() {
	return 0;
}

int CXe::DemXeMay() {
	return 0;
}