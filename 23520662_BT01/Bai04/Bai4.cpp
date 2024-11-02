#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void TinhToanPS(PHANSO, PHANSO);

int main() {
	PHANSO a, b;
	Nhap(a);
	Nhap(b);
	TinhToanPS(a, b);
	return 0;
}

void Nhap(PHANSO& a)
{
	cout << "Nhap tu: ";
	cin >> a.Tu;
	cout << "Nhap mau: ";
	cin >> a.Mau;
}


void TinhToanPS(PHANSO a, PHANSO b)
{
	PHANSO A, B;
	A.Tu = a.Tu * b.Mau;
	A.Mau = a.Mau * b.Mau;
	B.Tu = b.Tu * a.Mau;
	B.Mau = b.Mau * a.Mau;
	cout << "Tong = " << A.Tu + B.Tu << "/" << A.Mau << endl;
	cout << "Hieu = " << A.Tu - B.Tu << "/" << A.Mau << endl;
	cout << "Tich = " << a.Tu * b.Tu << "/" << a.Mau * b.Mau << endl;
	cout << "Thuong = " << a.Tu * b.Mau << "/" << a.Mau * b.Tu << endl;
}