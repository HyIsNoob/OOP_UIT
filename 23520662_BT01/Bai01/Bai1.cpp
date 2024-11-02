#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
void KiemTraPHANSO(PHANSO);

int main() {
	PHANSO a;
	Nhap(a);
	KiemTraPHANSO(a);
	Xuat(a);
	return 0;
}

void Nhap(PHANSO& a)
{
	cout << "Nhap tu: ";
	cin >> a.Tu;
	cout << "Nhap mau: ";
	cin >> a.Mau;
}

void Xuat(PHANSO a)
{
	cout << "Phan so la: ";
	cout << a.Tu << " / " << a.Mau;
}

void KiemTraPHANSO(PHANSO a)
{
	if ((a.Tu * a.Mau) < 0)
		cout << "Phan so am";
	else if ((a.Tu * a.Mau) > 0)
		cout << "Phan so duong";
	else
		cout << "Phan so = 0";
	cout << endl;
}