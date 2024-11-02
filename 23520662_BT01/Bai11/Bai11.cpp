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
void Xuat(DATE);
DATE FromNumtoDate(int);
int DateCounter(DATE);
int SoNgayTrongThang(DATE);
bool isNamNhuan(int);

int main()
{
	DATE a;
	Nhap(a);
	int n;
	cout << "Nhap so ngay tiep theo: ";
	cin >> n;
	Xuat(FromNumtoDate(DateCounter(a) + n));
	return 0;
}

int DateCounter(DATE a)
{
	DATE NamDau = { 1,1,1 };
	int S = 0;
	while (NamDau.Nam < a.Nam)
	{
		if (isNamNhuan(NamDau.Nam))
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

DATE FromNumtoDate(int a)
{
	DATE NamReal = { 1,1,1 };
	int SoNam = 365;
	while (a - SoNam > 0)
	{
		if (isNamNhuan(NamReal.Nam))
			SoNam = 366;
		else
			SoNam = 365;
		a -= SoNam;
		NamReal.Nam++;
	}
	while (a >= SoNgayTrongThang(NamReal))
	{
		a -= SoNgayTrongThang(NamReal);
		NamReal.Thang++;
	}
	NamReal.Ngay = a;
	return NamReal;
}

int SoNgayTrongThang(DATE a)
{
	int SoNgay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (isNamNhuan(a.Nam) == true && a.Thang == 2)
		return 29;
	else
		return SoNgay[a.Thang - 1];
}

bool isNamNhuan(int a)
{
	if ((a % 100 != 0 && a % 4 == 0) || a % 400 == 0)
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

void Xuat(DATE a)
{
	cout << a.Ngay << "/" << a.Thang << "/" << a.Nam;
}