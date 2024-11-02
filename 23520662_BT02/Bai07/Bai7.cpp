#include "CDate.h"
#include <iostream>
using namespace std;

int main()
{
	CDate a;
	a.Nhap();
	a.Xuat();
	a.STTToNgay(a.NgayToSTT() - 1);
	return 0;
}