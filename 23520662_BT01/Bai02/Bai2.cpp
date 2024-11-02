#include <iostream>
#include <cmath>
using namespace std;

struct Diem
{
	int x;
	int y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void KhoangCach(DIEM, DIEM);

int main()
{
	DIEM a, b;
	Nhap(a);
	Nhap(b);
	KhoangCach(a, b);
}

void Nhap(DIEM& a)
{
	cin >> a.x;
	cin >> a.y;
}

void KhoangCach(DIEM a, DIEM b)
{
	cout << sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}