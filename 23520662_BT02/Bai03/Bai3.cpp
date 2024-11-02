#include "CPhanSo.h"
#include <iostream>
using namespace std;

int main()
{
	CPhanSo A, B;
	A.Nhap();
	B.Nhap();
	A.XuLy(B);
	A.Xuat();
	B.Xuat();
	return 0;
}
