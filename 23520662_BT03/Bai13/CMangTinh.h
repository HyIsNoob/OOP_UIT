#pragma once
#include <iostream>
using namespace std;
const int ARRAY_SIZE = 5;

class CMangTinh {
private:
	int arr[ARRAY_SIZE];
public:
	friend istream& operator>>(istream&, CMangTinh&);
	friend ostream& operator<<(ostream&, const CMangTinh);
};

istream& operator>>(istream& m, CMangTinh& a) {
	cout << "Nhap " << ARRAY_SIZE << " phan tu cho mang:\n";
	for (int i = 0; i < ARRAY_SIZE; ++i) {
		cout << "Phan tu thu " << i + 1 << ": ";
		m >> a.arr[i];
	}
	return m;
}
ostream& operator<<(ostream& m, const CMangTinh a) {
	m << "Cac phan tu cua mang:\n";
	for (int i = 0; i < ARRAY_SIZE; ++i) {
		m << a.arr[i] << " ";
	}
	m << endl;
	return m;
}