#include "CPhanSo.h"
#include <iostream>
using namespace std;

CPhanSo::CPhanSo() {
	Tu = 1;
	Mau = 0;
	//cout << "Phuong thuc thiet lap mac dinh." << endl;
}

CPhanSo::CPhanSo(int TuTu, int MauMau) {
	Tu = TuTu;
	Mau = MauMau;
	//cout << "Phuong thuc thiet lap khi co day du thong tin. " << endl;
}

CPhanSo::CPhanSo(const CPhanSo& a) {
	Tu = a.Tu;
	Mau = a.Mau;
	//cout << "Phuong thuc thiet lap sao chep." << endl;
}

CPhanSo::~CPhanSo() {
	//cout << "Phuong thuc pha huy." << endl;
	return;
}

istream& operator>>(istream& m, CPhanSo& a) {
	cout << "Nhap Tu: ";
	m >> a.Tu;
	cout << "Nhap Mau: ";
	m >> a.Mau;
	return m;
}

ostream& operator<<(ostream& m, CPhanSo a) {
	m << a.Tu;
	cout << "/";
	m << a.Mau;
	cout << endl;
	return m;
}

CPhanSo& CPhanSo::operator=(const CPhanSo& a) {
	Tu = a.Tu;
	Mau = a.Mau;
	return *this;
}

CPhanSo CPhanSo::operator+(const CPhanSo& a) {
	cout << "Toan Tu +: ";
	CPhanSo temp;
	if (Mau == a.Mau) {
		temp.Tu = Tu + a.Tu;
		temp.Mau = Mau;
	}
	else {
		temp.Tu = (Tu * a.Mau) + (a.Tu * Mau);
		temp.Mau = (a.Mau * Mau);
	}
	return temp;
}

CPhanSo CPhanSo::operator-(const CPhanSo& a) {
	cout << "Toan Tu -: ";
	CPhanSo temp;
	if (Mau == a.Mau) {
		temp.Tu = Tu - a.Tu;
		temp.Mau = Mau;
	}
	else {
		temp.Tu = (Tu * a.Mau) - (a.Tu * Mau);
		temp.Mau = (a.Mau * Mau);
	}
	return temp;
}

CPhanSo CPhanSo::operator*(const CPhanSo& a) {
	cout << "Toan Tu *: ";
	CPhanSo temp;
	temp.Tu = Tu * a.Tu;
	temp.Mau = Mau * a.Mau;
	return temp;
}

CPhanSo CPhanSo::operator/(const CPhanSo& a) {
	cout << "Toan Tu /: ";
	CPhanSo temp;
	temp.Tu = Tu * a.Mau;
	temp.Mau = Mau * a.Tu;
	return temp;
}

CPhanSo& CPhanSo::operator+=(const CPhanSo& a) {
	cout << "Toan Tu +=: ";
	*this = *this + a;
	return *this;
}

CPhanSo& CPhanSo::operator-=(const CPhanSo& a) {
	cout << "Toan Tu -=: ";
	*this = *this - a;
	return *this;
}

CPhanSo& CPhanSo::operator*=(const CPhanSo& a) {
	cout << "Toan Tu *=: ";
	*this = *this * a;
	return *this;
}

CPhanSo& CPhanSo::operator/=(const CPhanSo& a) {
	cout << "Toan Tu /=: ";
	*this = *this / a;
	return *this;
}

CPhanSo& CPhanSo::operator++(int) {
	cout << "Toan Tu ++: ";
	CPhanSo temp;
	temp.Tu = 1;
	temp.Mau = 1;
	*this = *this + temp;
	return *this;
}

CPhanSo& CPhanSo::operator--(int) {
	cout << "Toan Tu --: ";
	CPhanSo temp;
	temp.Tu = 1;
	temp.Mau = 1;
	*this = *this - temp;
	return *this;
}