#include "CHinhThang.h"
#include "CTuGiac.h"

void CHinhThang::Nhap() {
	CTuGiac::Nhap();
	cout << "Nhap do dai canh day be (HT): ";
	cin >> DoDaiDayBe; cin.ignore();
	cout << "Nhap do dai canh day lon (HT): ";
	cin >> DoDaiDayLon; cin.ignore();
	cout << "Nhap do dai canh ben thu nhat (HT): ";
	cin >> DoDaiBenThuNhat; cin.ignore();
	cout << "Nhap do dai canh ben thu hai (HT): ";
	cin >> DoDaiBenThuHai; cin.ignore();
}

void CHinhThang::Xuat()
{
	CTuGiac::Xuat();
	cout << "Do dai canh day be (HT): " << DoDaiDayBe << endl;
	cout << "Do dai canh day lon (HT): " << DoDaiDayLon << endl;
	cout << "Do dai canh ben thu nhat (HT): "<< DoDaiBenThuNhat << endl;
	cout << "Do dai canh ben thu hai (HT): " << DoDaiBenThuHai << endl;
}

float CHinhThang::XuatChuVi() {
	return (DoDaiDayBe + DoDaiDayLon + DoDaiBenThuNhat + DoDaiBenThuHai);
}

float CHinhThang::XuatDienTich() {
	return ((h * (DoDaiDayBe + DoDaiDayLon) / 2));
}

float CHinhThang::TongDienTich()
{
	return ((h * (DoDaiDayBe + DoDaiDayLon) / 2));
}