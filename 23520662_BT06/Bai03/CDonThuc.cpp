#include "CDonThuc.h"
#include <iostream>
using namespace std;

CDonThuc::CDonThuc() {
	HeSo = 0;
	SoMu = 0;
	//cout << "Phuong thuc thiet lap mac dinh." << endl;
}

CDonThuc::CDonThuc(int TuTu, int MauMau) {
	HeSo = TuTu;
	SoMu = MauMau;
	//cout << "Phuong thuc thiet lap khi co day du thong tin. " << endl;
}

CDonThuc::CDonThuc(const CDonThuc& a) {
	HeSo = a.HeSo;
	SoMu = a.SoMu;
	//cout << "Phuong thuc thiet lap sao chep." << endl;
}

CDonThuc::~CDonThuc() {
	//cout << "Phuong thuc pha huy." << endl;
	return;
}

istream& operator>>(istream& is, CDonThuc& sp) {
	cout << "Nhap phan he so: ";
	is >> sp.HeSo;
	cout << "Nhap phan so mu: ";
	is >> sp.SoMu;
	return is;
}

ostream& operator<<(ostream& os, CDonThuc sp) {
	os << sp.HeSo << "x" << sp.SoMu << endl;
	return os;
}

CDonThuc& CDonThuc::operator=(const CDonThuc& sp) {
	if (this == &sp) {
		return *this;
	}
	HeSo = sp.HeSo;
	SoMu = sp.SoMu;
	return *this;
}

CDonThuc CDonThuc::operator*(const CDonThuc& sp) {
	cout << "Toan Tu *: ";
	float hs = HeSo * sp.HeSo;
	int sm = SoMu + sp.SoMu;
	return CDonThuc(hs, sm);
}

CDonThuc CDonThuc::operator/(const CDonThuc& sp) {
	cout << "Toan Tu /: ";
	float hs = HeSo / sp.HeSo;
	int sm = SoMu - sp.SoMu;
	return CDonThuc(hs, sm);
}

CDonThuc& CDonThuc::operator*=(const CDonThuc& sp) {
	cout << "Toan Tu *=: ";
	float hs = HeSo * sp.HeSo;
	int sm = SoMu + sp.SoMu;
	HeSo = hs;
	SoMu = sm;
	return *this;
}

CDonThuc& CDonThuc::operator/=(const CDonThuc& sp) {
	cout << "Toan Tu /=: ";
	float hs = HeSo / sp.HeSo;
	int sm = SoMu - sp.SoMu;
	HeSo = hs;
	SoMu = sm;
	return *this;
}
