#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
const float PI = 3.14159265359;
using namespace std;

struct Diem
{
	int x;
	int y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM Tam;
	int BanKinh;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DUONGTRON&);
void Nhap(DIEM&);
void TinhToan(DUONGTRON);

int main()
{
	DUONGTRON O;
	Nhap(O);
	TinhToan(O);
	return 0;
}

void Nhap(DIEM& a)
{
	cout << endl;
	cout << "Nhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}

void Nhap(DUONGTRON& O)
{
	cout << "Nhap tam: ";
	Nhap(O.Tam);
	cout << "Nhap ban kinh: ";
	cin >> O.BanKinh;
}

void TinhToan(DUONGTRON O)
{
	cout << "Dien Tich = " << PI * pow(O.BanKinh, 2) << endl;
	cout << "Chu Vi = " << 2 * PI * O.BanKinh;
}