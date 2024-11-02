#include "CDiem.h"
#include <iostream>
using namespace std;

int main()
{
	CDiem A, B;
	A.Nhap();
	B.Nhap();
	float kq = A.KhoangCach(B);
	cout << "Khoang cach la:" << kq << endl;
	A.Xuat();
	B.Xuat();
	return 0;
}
