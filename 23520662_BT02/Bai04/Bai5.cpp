#include "CSoPhuc.h"
#include <iostream>
using namespace std;

int main()
{
	CSoPhuc A, B;
	A.Nhap();
	B.Nhap();
	A.TinhToan(B);
	A.Xuat();
	B.Xuat();
	return 0;
}