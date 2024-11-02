#include <iostream>
using namespace std;

struct date
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct date DATE;

void Nhap(DATE&);
int DateCounter(DATE);
int SoNgayTrongThang(DATE);
bool isNamNhuan(DATE);

int main()
{
	DATE a;
	Nhap(a);
	cout << DateCounter(a);
	return 0;
}

int DateCounter(DATE a)
{
	DATE NamDau;
	NamDau.Ngay = 1;
	NamDau.Thang = 1;
	NamDau.Nam = 1;
	int S = 0;
	while (NamDau.Nam < a.Nam)
	{
		if (isNamNhuan(NamDau))
			S += 366;
		else
			S += 365;
		NamDau.Nam++;
	}
	while (NamDau.Thang < a.Thang)
	{
		S += SoNgayTrongThang(NamDau);
		NamDau.Thang++;
	}
	S += a.Ngay;
	return S;
}

int SoNgayTrongThang(DATE a)
{
	int SoNgay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (isNamNhuan(a) == true && a.Thang == 2)
		return 29;
	else
		return SoNgay[a.Thang - 1];
}

bool isNamNhuan(DATE a)
{
	if ((a.Nam % 100 != 0 && a.Nam % 4 == 0) || a.Nam % 400 == 0)
		return true;
	return false;
}

void Nhap(DATE& a)
{
	cout << "Nhap ngay: ";
	cin >> a.Ngay;
	cout << "Nhap thang: ";
	cin >> a.Thang;
	cout << "Nhap nam: ";
	cin >> a.Nam;
}