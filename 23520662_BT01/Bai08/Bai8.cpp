#include <iostream>
#include <cmath>
using namespace std;

struct Diem
{
	int x;
	int y;
};
typedef struct Diem DIEM;

struct TamGiac
{
	DIEM a;
	DIEM b;
	DIEM c;
};
typedef struct TamGiac TAMGIAC;

void Nhap(TAMGIAC&);
void Nhap(DIEM&);
void TinhToan(TAMGIAC);
int KhoangCach(DIEM, DIEM);
void ToaDoTrongTam(TAMGIAC);

int main()
{
	TAMGIAC a;
	Nhap(a);
	TinhToan(a);
	ToaDoTrongTam(a);
}

void ToaDoTrongTam(TAMGIAC ABC)
{
	cout << "Toa do trong tam la: " << endl;
	cout << "x = " << (ABC.a.x + ABC.b.x + ABC.c.x) / 3 << endl;
	cout << "y = " << (ABC.a.y + ABC.b.y + ABC.c.y) / 3;
}

void Nhap(TAMGIAC& ABC)
{
	cout << "Nhap diem A: ";
	Nhap(ABC.a);
	cout << "Nhap diem B: ";
	Nhap(ABC.b);
	cout << "Nhap diem C: ";
	Nhap(ABC.c);
}

void Nhap(DIEM& a)
{
	cout << endl;
	cout << "Nhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}

int KhoangCach(DIEM a, DIEM b)
{
	return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void TinhToan(TAMGIAC ABC)
{
	float AB, BC, AC;
	AB = KhoangCach(ABC.a, ABC.b);
	BC = KhoangCach(ABC.b, ABC.c);
	AC = KhoangCach(ABC.a, ABC.c);
	float ChuVi = AB + BC + AC;
	float NuaChuVi = ChuVi / 2;
	float DienTich;
	if (AB + BC > AC && AB + AC > BC && BC + AC > AB)
	{
		DienTich = sqrt(NuaChuVi * (NuaChuVi - AB) * (NuaChuVi - BC) * (NuaChuVi - AC));
		cout << "Chu vi = " << ChuVi << endl;
		cout << "Dien tich = " << DienTich << endl;
	}
	else {
		cout << "Ba diem khong tao thanh tam giac hop le." << endl;
	}
}
