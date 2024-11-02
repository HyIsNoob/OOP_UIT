#include "CCongTy.h"
#include "CNhanVienQuanLy.h"
#include "CNhanVienSanXuat.h"
#include "CNhanVienVanPhong.h"

void CCongTy::Nhap() {
	cout << "Nhap so luong nhan vien: ";
	cin >> n; cin.ignore();
	int loai;
	for (int i = 0; i < n; i++) {
		cout << "Nhap loai nhan vien (0.Quan Ly, 1.San xuat, 2.Van Phong): ";
		cin >> loai; cin.ignore();
		if (loai == 0)
			ds[i] = new CNhanVienQuanLy;
		else if (loai == 1)
			ds[i] = new CNhanVienSanXuat;
		else
			ds[i] = new CNhanVienVanPhong;
		ds[i]->Nhap();
	}
}

void CCongTy::Xuat() {
	cout << endl << "Danh sach cac nhan vien la: " << endl;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}

float CCongTy::TongLuong() {
	cout << "Tong luong cua toan Cong Ty la: ";
	float Tong = 0;
	for (int i = 0; i < n; i++)
		Tong = Tong + ds[i]->TinhLuong();
	return Tong;
}

CNhanVien* CCongTy::TimKiem(string nv) {
	for (int i = 0; i < n; i++) {
		CNhanVien* KQ = ds[i]->TimKiem(nv);
		if (KQ != NULL)
			return KQ;
	}
	return NULL;
}