#include "CHinhCau.h"

CHinhCau::CHinhCau()
{
	R = 0;
	cout << "Phuong thuc thiet lap mac dinh lop hinh cau." << endl;
}

CHinhCau::CHinhCau(CDiemKhongGian I, float r)
{
	this->I = I;
	R = r;
	cout << "Phuong thuc thiet lap khi biet day du thong tin lop hinh cau." << endl;
}

CHinhCau::CHinhCau(const CHinhCau& S)
{
	I = S.I;
	R = S.R;
	cout << "Phuong thuc thiet lap sao chep lop hinh cau." << endl;
}

CHinhCau::~CHinhCau()
{
	cout << "Phuong thuc pha huy lop hinh cau." << endl;
	return;
}