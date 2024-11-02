#include "CNhanVienSanXuat.h"

void CNhanVienSanXuat::Nhap() {
	cout << "Nhap ho ten nhan vien (SX): ";
	getline(cin, HoTen);
	cout << "Nhap ngay sinh nhan vien (SX): ";
	getline(cin, NgaySinh);
	cout << "Nhap luong co ban nhan vien (SX): ";
	cin >> LuongCoBan;
	cin.ignore();
	cout << "Nhap so san pham cua nhan vien (SX) lam ra: ";
	cin >> SoSanPham;
	cin.ignore();
}

void CNhanVienSanXuat::Xuat() {
	cout << "Ten nhan vien (SX) la: " << HoTen << endl;
	cout << "Ngay sinh nhan vien (SX) la: " << NgaySinh << endl;
	cout << "Luong co ban nhan vien (SX) la: " << LuongCoBan << endl;
	cout << "So san pham cua nhan vien (SX) lam ra la: " << SoSanPham << endl;
}

float CNhanVienSanXuat::TinhLuong() {
	return LuongCoBan + SoSanPham * 2000;
}

CNhanVien* CNhanVienSanXuat::TimKiem(string nv) {
	if (HoTen.compare(nv) == 0)
		return this;
	return NULL;
}