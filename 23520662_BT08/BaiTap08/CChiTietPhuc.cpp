#include "CChiTietPhuc.h"
#include "CChiTietDon.h"

void CChiTietPhuc::Nhap() {
	cout << "Nhap ma so: ";
	getline(cin, MaSo);
	cout << "Nhap so luong chi tiet thanh phan cua chi tiet phuc: ";
	cin >> n;
	cin.ignore();
	int loai;
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu con thu " << i + 1 << " : ";
		cout << "Nhap loai chi tiet (0. Chi tiet don, 1. Chi tiet phuc) ";
		cin >> loai;
		cin.ignore();
		if (loai == 0)
			ds[i] = new CChiTietDon;
		else
			ds[i] = new CChiTietPhuc;
		ds[i]->Nhap();
	}
}

void CChiTietPhuc::Xuat() {
	cout << "Ma So: " << MaSo << endl;
	cout << "Danh sach cac chi tiet con cua chi tiet phuc: " << endl;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}

float CChiTietPhuc::TinhGiaTien() {
	float Tong = 0;
	for (int i = 0; i < n; i++)
		Tong = Tong + ds[i]->TinhGiaTien();
	return Tong;
}

CChiTiet* CChiTietPhuc::TimKiem(string ms) {
	if (MaSo.compare(ms) == 0)
		return this;
	for (int i = 0; i < n; i++) {
		CChiTiet* kq = ds[i]->TimKiem(ms);
		if (kq != NULL)
			return kq;
	}
	return NULL;
}

int CChiTietPhuc::DemChiTietDon() {
	int dem = 0;
	for (int i = 0; i < n; i++)
		dem = dem + ds[i]->DemChiTietDon();
	return dem;
}