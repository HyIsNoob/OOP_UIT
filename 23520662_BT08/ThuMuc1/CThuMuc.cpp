#include "CThuMuc.h"
#include "CTapTin.h"

void CThuMuc::Nhap() {
	cout << "Nhap ten thu muc: ";
	getline(cin, ten);
	cout << "Nhap ngay thang tao: ";
	getline(cin, NgayThangTao);
	cout << "Nhap so luong doi tuong luu tru trong thu muc: ";
	cin >> n;
	cin.ignore();
	int loai;
	for (int i = 0; i < n; i++) {
		cout << "Nhap doi tuong luu tru thu " << i + 1 << " : " << endl;
		cout << "Nhap loai (0.Tap tin, 1.Thu muc): ";
		cin >> loai;
		cin.ignore();
		if (loai == 0)
			ds[i] = new CTapTin;
		else
			ds[i] = new CThuMuc;
		ds[i]->Nhap();
	}
}

void CThuMuc::Xuat() {
	cout << "Ten thu muc: " << ten << endl;
	cout << "Ngay thang tao: " << NgayThangTao << endl;
	cout << "Danh sach cac doi tuong luu tru con cua thu muc: " << endl;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}

float CThuMuc::TongDungLuong() {
	float tong = 0;
	for (int i = 0; i < n; i++)
		tong = tong + ds[i]->TongDungLuong();
	return tong;
}

int CThuMuc::DemTapTin() {
	float tong = 0;
	for (int i = 0; i < n; i++)
		tong = tong + ds[i]->DemTapTin();
	return tong;
}

int CThuMuc::DemThuMuc() {
	int dem = 1;
	for (int i = 0; i < n; i++)
		dem = dem + ds[i]->DemThuMuc();
	return dem;
}