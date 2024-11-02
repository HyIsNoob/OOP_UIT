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
void NgayHomQua(DATE);
int SoNgayTrongThang(DATE);
bool isNamNhuan(DATE);

int main()
{
	DATE a;
	Nhap(a);
	NgayHomQua(a);
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

bool isNamNhuan(DATE a)
{
	if ((a.Nam % 4 == 0 && a.Nam % 100 != 0) || a.Nam % 400 == 0)
		return true;
	return false;
}

int SoNgayTrongThang(DATE a)
{
	int SoNgay[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (isNamNhuan(a) == true && a.Thang == 2)
		return 29;
	else
		return SoNgay[a.Thang - 1];
}


void NgayHomQua(DATE a)
{
	if (a.Ngay == 1 && a.Thang == 1)
		cout << "31/12/" << a.Nam - 1;
	else if (a.Ngay == 1)
	{
		a.Thang--;
		cout << SoNgayTrongThang(a) << "/" << a.Thang << "/" << a.Nam;
	}
	else
		cout << a.Ngay - 1 << "/" << a.Thang << "/" << a.Nam;
}
