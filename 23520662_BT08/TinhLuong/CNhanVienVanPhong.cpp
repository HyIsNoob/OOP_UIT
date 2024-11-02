#include "CNhanVienVanPhong.h"

void CNhanVienVanPhong::Nhap() {
	cout << "Nhap ho ten nhan vien (VP): ";
	getline(cin, HoTen);
	cout << "Nhap ngay sinh nhan vien (VP): ";
	getline(cin, NgaySinh);
	cout << "Nhap luong co ban nhan vien (VP): ";
	cin >> LuongCoBan;
	cin.ignore();
	cout << "Nhap so ngay lam viec cua nhan vien (VP): ";
	cin >> SoNgaylamViec;
	cin.ignore();
	cout << "Nhap tro cap cua nhan vien (VP): ";
	cin >> TroCap;
	cin.ignore();
}

void CNhanVienVanPhong::Xuat() {
	cout << "Ten nhan vien (VP) la: " << HoTen << endl;
	cout << "Ngay sinh nhan vien (VP) la: " << NgaySinh << endl;
	cout << "Luong co ban nhan vien (VP) la: " << LuongCoBan << endl;
	cout << "So ngay lam viec cua nhan vien (VP) la: " << SoNgaylamViec << endl;
	cout << "Tro cap cua nhan vien (VP) la: " << TroCap << endl;
}

float CNhanVienVanPhong::TinhLuong() {
	return LuongCoBan + SoNgaylamViec * 1000 + TroCap;
}

CNhanVien* CNhanVienVanPhong::TimKiem(string nv) {
	if (HoTen.compare(nv) == 0)
		return this;
	return NULL;
}