#include <iostream>
using namespace std;

struct SoPhuc
{
	int Thuc;
	int Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void TinhToan(SOPHUC, SOPHUC);

int main() {
	SOPHUC a, b;
	Nhap(a);
	Nhap(b);
	TinhToan(a, b);
}

void Nhap(SOPHUC& a)
{
	cin >> a.Thuc >> a.Ao;
}

void TinhToan(SOPHUC a, SOPHUC b)
{
	cout << "Tong = " << a.Thuc + b.Thuc << " + " << a.Ao + b.Ao << "i" << endl;
	cout << "Hieu = " << a.Thuc - b.Thuc << " + " << a.Ao - b.Ao << "i" << endl;
	cout << "Tich = " << (a.Thuc * b.Thuc) - (a.Ao * b.Ao) << " + " << (a.Thuc * b.Ao) + (b.Thuc * a.Ao) << "i" << endl;
}