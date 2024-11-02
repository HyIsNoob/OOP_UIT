#include "CHinhBinhHanh.h"
#include "CTuGiac.h"

void CHinhBinhHanh::Nhap() {
	CTuGiac::Nhap();
	cout << "Nhap do dai canh day (HBH): ";
	cin >> DoDaiDay; cin.ignore();
	cout << "Nhap do dai canh ben (HBH): ";
	cin >> DoDaiBen; cin.ignore();
}

void CHinhBinhHanh::Xuat() {
	CTuGiac::Xuat();
	cout << "Do dai canh day (HBH): " << DoDaiDay << endl;
	cout << "Do dai canh ben (HBH): " << DoDaiBen << endl;
}

float CHinhBinhHanh::XuatChuVi() {
	return ((DoDaiDay + DoDaiBen) * 2);
}

float CHinhBinhHanh::XuatDienTich() {
	return (DoDaiDay * DoDaiBen);
}

float CHinhBinhHanh::TongDienTich() {
	return (DoDaiDay * DoDaiBen);
}