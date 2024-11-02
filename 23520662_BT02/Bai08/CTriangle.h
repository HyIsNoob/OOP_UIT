#pragma once
#include <iostream>
#include "CDiem.h"
using namespace std;

class CTriangle
{
private:
	CDiem A;
	CDiem B;
	CDiem C;
public:
	void Nhap();
	void Xuat();
	void TinhToan();
	void TrongTam();
};

void CTriangle::TrongTam()
{
	cout << "Toa do trong tam la: " << endl;
	cout << "x = " << A.TrongTam1(B, C);
	cout << "y = " << A.TrongTam2(B, C);
}

void CTriangle::Nhap()
{
	A.Nhap();
	B.Nhap();
	C.Nhap();
}

void CTriangle::TinhToan()
{
	float AB, BC, AC;
	AB = A.KhoangCach(B);
	BC = B.KhoangCach(C);
	AC = A.KhoangCach(C);
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

void CTriangle::Xuat()
{
	cout << "Diem A: " << endl; A.Xuat(); cout << endl;
	cout << "Diem B: " << endl; B.Xuat(); cout << endl;
	cout << "Diem C: " << endl; C.Xuat();
}
