#include "CMatPhang.h"

int main() {
	CMatPhang P;
	cout << "~~~~~~~Nhap danh sach cac tu giac trong mat phang~~~~~~~" << endl;
	P.Nhap();
	cout << "~~~~~~~Xuat danh sach cac tu giac trong mat phang~~~~~~~" << endl;
	P.Xuat();
	cout << "~~~~~~~Danh sach cac tu giac gom CHU VI trong mat phang~~~~~~~" << endl;
	P.XuatChuVi();
	cout << "~~~~~~~Danh sach cac tu giac gom DIEN TICH trong mat phang~~~~~~~" << endl;
	P.XuatDienTich();
	cout << "~~~~~~~Tong dien tich cua cac tu giac~~~~~~~" << endl;
	cout << "Tong dien tich cac tu giac la: " << P.TongDienTich() << endl;
	return 1;
}