#include "CDiemKhongGian.h"

CDiemKhongGian::CDiemKhongGian()
{
	x = 0;
	y = 0;
	z = 0;
	cout << "Phuong thuc thiet lap mac dinh." << endl;
}

CDiemKhongGian::CDiemKhongGian(float xx, float yy, float zz)
{
	x = xx;
	y = yy;
	z = zz;
	cout << "Phuong thuc thiet lap co tham so." << endl;
}

CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian& P)
{
	x = P.x;
	y = P.y;
	z = P.z;
	cout << "Phuong thuc thiet lap sao chep." << endl;
}

CDiemKhongGian::~CDiemKhongGian()
{
	cout << "Phuong thuc pha huy." << endl;
	return;
}

CDiemKhongGian& CDiemKhongGian::operator=(const CDiemKhongGian& a) {
	cout << "Phuong thuc gan." << endl;
	x = a.x;
	y = a.y;
	z = a.z;
	return *this;
}

