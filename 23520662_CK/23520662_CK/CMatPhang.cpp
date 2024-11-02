#include "CMatPhang.h"
#include "CTuGiac.h"
#include "CHinhBinhHanh.h"
#include "CHinhThang.h"

void CMatPhang::Nhap() {
	int loai;
	cout << "Nhap so luong tu giac co trong mat phang: ";
	cin >> n; cin.ignore();
	for (int i = 0; i < n; i++) {
		cout << "Nhap tu giac thu " << i + 1 << ":" << endl;
		cout << "Nhap loai cua tu giac (0.Hinh Binh Hanh, 1. Hinh Thang): ";
		cin >> loai; cin.ignore();
		if (loai == 0)
			ds[i] = new CHinhBinhHanh;
		else
			ds[i] = new CHinhThang;
		ds[i]->Nhap();
	}
}

void CMatPhang::Xuat() {
	cout << "~~~~~~~Danh sach cac tu giac co trong mat phang~~~~~~~" << endl;
	for (int i = 0; i < n; i++) {
		cout << "Tu giac thu " << i + 1 << ": " << endl;
		ds[i]->Xuat();
	}
}

float CMatPhang::XuatChuVi() {
	for (int i = 0; i < n; i++)
		cout << "Chu vi tu giac thu " << i + 1 << ": " << ds[i]->XuatChuVi() << endl;
	return 0;
}

float CMatPhang::XuatDienTich() {
	for (int i = 0; i < n; i++)
		cout << "Dien tich tu giac thu " << i + 1 << ": " << ds[i]->XuatDienTich() << endl;
	return 0;
}

float CMatPhang::TongDienTich() {
	float S = 0;
	for (int i = 0; i < n; i++)
		S = S + ds[i]->TongDienTich();
	return S;
}
