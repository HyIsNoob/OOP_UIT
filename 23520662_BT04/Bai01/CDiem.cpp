#include "CDiem.h"

CDiem::CDiem()
{
	x = 0;
	y = 0;
	cout << "Phuong thuc thiet lap mac dinh." << endl;
}

CDiem::CDiem(float xx, float yy)
{
	x = xx;
	y = yy;
	cout << "Phuong thuc thiet lap khi biet day du thong tin." << endl;
}

CDiem::CDiem(const CDiem& P)
{
	x = P.x;
	y = P.y;
	cout << "Phuong thuc thiet lap sao chep." << endl;
}

CDiem::~CDiem()
{
	cout << "Phuong thuc pha huy." << endl;
	return;
}