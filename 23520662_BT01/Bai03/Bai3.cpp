#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void KiemTraPHANSO(PHANSO, PHANSO);

int main() {
	PHANSO a, b;
	Nhap(a);
	Nhap(b);
	KiemTraPHANSO(a, b);
	return 0;
}

void Nhap(PHANSO& a)
{
	cout << "Nhap tu: ";
	cin >> a.Tu;
	cout << "Nhap mau: ";
	cin >> a.Mau;
}


void KiemTraPHANSO(PHANSO a, PHANSO b)
{
	float A, B;
	A = a.Tu / a.Mau;
	B = b.Tu / b.Mau;
	if (A > B)
		cout << a.Tu << "/" << a.Mau;
	else
		cout << b.Tu << "/" << b.Mau;
}