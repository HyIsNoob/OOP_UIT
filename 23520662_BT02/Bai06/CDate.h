#pragma once
#include <iostream>
using namespace std;

class CDate
{
private:
	int Ngay;
	int Thang;
	int Nam;
public:
	void Nhap();
	void Xuat();
	bool NamNhuan(int);
	int NgayTrongThang(int, int);
	int NgayToSTT();
	void STTToNgay(int);
};

void CDate::Nhap()
{
	cout << "Nhap ngay: ";
	cin >> Ngay;
	cout << "Nhap thang: ";
	cin >> Thang;
	cout << "Nhap nam: ";
	cin >> Nam;
}

void CDate::STTToNgay(int a)
{
	int NgayFake = 1;
	int ThangFake = 1;
	int NamFake = 1;
	int SoNam = 365;
	while (a - SoNam > 0)
	{
		if (NamNhuan(NamFake))
			SoNam = 366;
		else
			SoNam = 365;
		a -= SoNam;
		NamFake++;
	}
	while (a > NgayTrongThang(ThangFake, NamFake))
	{
		a -= NgayTrongThang(ThangFake, NamFake);
		ThangFake++;
	}
	NgayFake = a;
	if (NgayFake == 0)
		NgayFake++;
	cout << "Ngay tiep theo la: ";
	cout << NgayFake << "/" << ThangFake << "/" << NamFake << endl;
}

int CDate::NgayToSTT()
{
	int NgayFake = 1;
	int ThangFake = 1;
	int NamFake = 1;
	int S = 0;
	while (NamFake < Nam)
	{
		if (NamNhuan(NamFake))
			S += 366;
		else
			S += 365;
		NamFake++;
	}
	while (ThangFake < Thang)
	{
		S += NgayTrongThang(ThangFake, NamFake);
		ThangFake++;
	}
	S += Ngay;
	return S;
}

int CDate::NgayTrongThang(int Month, int Year)
{
	int SoNgay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (NamNhuan(Year))
		return 29;
	return SoNgay[Month - 1];
}

bool CDate::NamNhuan(int Year)
{
	if (Year % 400 == 0)
		return true;
	if (Year % 100 != 0 && Year % 4 == 0)
		return true;
	else
		return false;
}

void CDate::Xuat()
{
	cout << "Date: " << Ngay << "/" << Thang << "/" << Nam << endl;
}

