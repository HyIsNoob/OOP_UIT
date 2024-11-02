#include "CChiTietDon.h"

void CChiTietDon::Nhap() {
	cout << "Nhap ma so: ";
	getline(cin, MaSo);
	cout << "Nhap gia tien: ";
	cin >> GiaTien;
}

void CChiTietDon::Xuat() {
	cout << "Ma So: " << MaSo << endl;
	cout << "Gia Tien: " << GiaTien << endl;
}

float CChiTietDon::TinhGiaTien() {
	return GiaTien;
}

CChiTiet* CChiTietDon::TimKiem(string ms) {
	if (MaSo.compare(ms) == 0)
		return this;
	return NULL;
}

int CChiTietDon::DemChiTietDon() {
	return 1;
}