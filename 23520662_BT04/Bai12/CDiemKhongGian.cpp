#include "CDiemKhongGian.h"

CDiemKhongGian::CDiemKhongGian()
{
	x = 0;
	y = 0;
	z = 0;
	cout << "Phuong thuc thiet lap mac dinh lop diem khong gian." << endl;
}

CDiemKhongGian::CDiemKhongGian(float xx, float yy, float zz)
{
	x = xx;
	y = yy;
	z = zz;
	cout << "Phuong thuc thiet lap khi biet day du thong tin lop diem khong gian." << endl;
}

CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian& P)
{
	x = P.x;
	y = P.y;
	z = P.z;
	cout << "Phuong thuc thiet lap sao chep lop diem khong gian." << endl;
}

CDiemKhongGian::~CDiemKhongGian()
{
	cout << "Phuong thuc pha huy lop diem khong gian." << endl;
	return;
}
