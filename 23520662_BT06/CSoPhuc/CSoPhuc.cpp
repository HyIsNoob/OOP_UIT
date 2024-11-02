#include "CSoPhuc.h"
#include <iostream>
using namespace std;

CSoPhuc::CSoPhuc() {
	Thuc = 0;
	Ao = 0;
	//cout << "Phuong thuc thiet lap mac dinh." << endl;
}

CSoPhuc::CSoPhuc(int TuTu, int MauMau) {
	Thuc = TuTu;
	Ao = MauMau;
	//cout << "Phuong thuc thiet lap khi co day du thong tin. " << endl;
}

CSoPhuc::CSoPhuc(const CSoPhuc& a) {
	Thuc = a.Thuc;
	Ao = a.Ao;
	//cout << "Phuong thuc thiet lap sao chep." << endl;
}

CSoPhuc::~CSoPhuc() {
	//cout << "Phuong thuc pha huy." << endl;
	return;
}

istream& operator>>(istream& is, CSoPhuc& sp) {
	cout << "Nhap phan thuc: ";
	is >> sp.Thuc;
	cout << "Nhap phan ao: ";
	is >> sp.Ao;
	return is;
}

ostream& operator<<(ostream& os, CSoPhuc sp) {
	os << sp.Thuc << " + " << sp.Ao << "i" << endl;
	return os;
}

CSoPhuc& CSoPhuc::operator=(const CSoPhuc& sp) {
	if (this == &sp) {
		return *this;
	}
	Thuc = sp.Thuc;
	Ao = sp.Ao;
	return *this;
}

CSoPhuc CSoPhuc::operator+(const CSoPhuc& sp) {
	cout << "Toan Tu +: ";
	return CSoPhuc(Thuc + sp.Thuc, Ao + sp.Ao);
}

CSoPhuc CSoPhuc::operator-(const CSoPhuc& sp) {
	cout << "Toan Tu -: ";
	return CSoPhuc(Thuc - sp.Thuc, Ao - sp.Ao);
}

CSoPhuc CSoPhuc::operator*(const CSoPhuc& sp) {
	cout << "Toan Tu *: ";
	int thuc = Thuc * sp.Thuc - Ao * sp.Ao;
	int ao = Thuc * sp.Ao + Ao * sp.Thuc;
	return CSoPhuc(thuc, ao);
}

CSoPhuc CSoPhuc::operator/(const CSoPhuc& sp) {
	cout << "Toan Tu /: ";
	int denominator = sp.Thuc * sp.Thuc + sp.Ao * sp.Ao;
	int thuc = (Thuc * sp.Thuc + Ao * sp.Ao) / denominator;
	int ao = (Ao * sp.Thuc - Thuc * sp.Ao) / denominator;
	return CSoPhuc(thuc, ao);
}

CSoPhuc& CSoPhuc::operator+=(const CSoPhuc& sp) {
	cout << "Toan Tu +=: ";
	Thuc += sp.Thuc;
	Ao += sp.Ao;
	return *this;
}

CSoPhuc& CSoPhuc::operator-=(const CSoPhuc& sp) {
	cout << "Toan Tu -=: ";
	Thuc -= sp.Thuc;
	Ao -= sp.Ao;
	return *this;
}

CSoPhuc& CSoPhuc::operator*=(const CSoPhuc& sp) {
	cout << "Toan Tu *=: ";
	int thuc = Thuc * sp.Thuc - Ao * sp.Ao;
	int ao = Thuc * sp.Ao + Ao * sp.Thuc;
	Thuc = thuc;
	Ao = ao;
	return *this;
}

CSoPhuc& CSoPhuc::operator/=(const CSoPhuc& sp) {
	cout << "Toan Tu /=: ";
	int denominator = sp.Thuc * sp.Thuc + sp.Ao * sp.Ao;
	int thuc = (Thuc * sp.Thuc + Ao * sp.Ao) / denominator;
	int ao = (Ao * sp.Thuc - Thuc * sp.Ao) / denominator;
	Thuc = thuc;
	Ao = ao;
	return *this;
}
