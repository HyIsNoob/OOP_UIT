#pragma once
#include <iostream>
using namespace std;
const int ARRAY_SIZE = 5;

class CMaTranTinh {
private:
	int arr[ARRAY_SIZE][ARRAY_SIZE];
public:
	friend istream& operator>>(istream&, CMaTranTinh&);
	friend ostream& operator<<(ostream&, const CMaTranTinh);
};

istream& operator>>(istream& m, CMaTranTinh& a) {
	cout << "Nhap " << ARRAY_SIZE * ARRAY_SIZE << " phan tu cho mang:\n";
	for (int i = 0; i < ARRAY_SIZE; ++i)
		for (int j = 0; j < ARRAY_SIZE; j++) {
			cout << "Phan tu thu [" << i << "][" << j << "]: ";
			m >> a.arr[i][j];
		}
	return m;
}
ostream& operator<<(ostream& m, const CMaTranTinh a) {
	m << "Cac phan tu cua mang:\n";
	for (int i = 0; i < ARRAY_SIZE; ++i)
		for (int j = 0; j < ARRAY_SIZE; j++)
			m << a.arr[i][j] << " ";
	m << endl;
	return m;
}