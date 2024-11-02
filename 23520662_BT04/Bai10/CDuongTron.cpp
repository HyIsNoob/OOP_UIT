#include "CDuongTron.h"

CDuongTron::CDuongTron()
{
	R = 0;
	cout << "Phuong thuc thiet lap mac dinh lop duong tron." << endl;
}

CDuongTron::CDuongTron(CDiem I, float R)
{
	this->I = I;
	this->R = R;
	cout << "Phuong thuc thiet lap khi biet day du thong tin lop duong tron." << endl;
}

CDuongTron::CDuongTron(const CDuongTron& C)
{
	I = C.I;
	R = C.R;
	cout << "Phuong thuc thiet lap sao chep lop duong tron." << endl;
}

CDuongTron::~CDuongTron()
{
	cout << "Phuong thuc pha huy lop duong tron." << endl;
	return;
}
