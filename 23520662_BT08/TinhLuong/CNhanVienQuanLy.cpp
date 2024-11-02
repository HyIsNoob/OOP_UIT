#include "CNhanVienQuanLy.h"

void CNhanVienQuanLy::Nhap() {
	cout << "Nhap ho ten nhan vien (QL): ";
	getline(cin, HoTen);
	cout << "Nhap ngay sinh nhan vien (QL): ";
	getline(cin, NgaySinh);
	cout << "Nhap luong co ban nhan vien (QL): ";
	cin >> LuongCoBan;
	cin.ignore();
	cout << "Nhap he so chuc vu cua nhan vien (QL): ";
	cin >> HeSoChucVu;
	cin.ignore();
	cout << "Nhap luong thuong cua nhan vien (QL): ";
	cin >> Thuong;
	cin.ignore();
}

void CNhanVienQuanLy::Xuat() {
	cout << "Ten nhan vien (QL) la: " << HoTen << endl;
	cout << "Ngay sinh nhan vien (QL) la: " << NgaySinh << endl;
	cout << "Luong co ban nhan vien (QL) la: " << LuongCoBan << endl;
	cout << "He so chuc vu cua nhan vien (QL) la: " << HeSoChucVu << endl;
	cout << "Luong thuong cua nhan vien (QL) la: " << Thuong << endl;
}

float CNhanVienQuanLy::TinhLuong() {
	return LuongCoBan * HeSoChucVu + Thuong;
}

CNhanVien* CNhanVienQuanLy::TimKiem(string nv) {
	if (HoTen.compare(nv) == 0)
		return this;
	return NULL;
}