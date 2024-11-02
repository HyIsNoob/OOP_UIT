#pragma once
#include <iostream>
using namespace std;
class CMaTranDong
{
private:
	int size;
	int** arr;
public:
	// Constructor
	CMaTranDong(int n) : size(n) {
		arr = new int* [size];
		for (int i = 0; i < size; ++i) {
			arr[i] = new int[size];
		}
	}

	friend istream& operator>>(istream&, CMaTranDong&);
	friend ostream& operator<<(ostream&, CMaTranDong);
};

istream& operator>>(istream& m, CMaTranDong& a) {
	cout << "Nhap so luong: ";
	m >> a.size;
	cout << "Nhap cac phan tu cua mang:\n";
	for (int i = 0; i < a.size; i++) {
		for (int j = 0; j < a.size; j++) {
			cout << "arr[" << i + 1 << "][" << j + 1 << "]: ";
			m >> a.arr[i][j];
		}
	}
	return m;
}

ostream& operator<<(ostream& m, CMaTranDong a) {
	cout << "Cac phan tu la: ";
	for (int i = 0; i < a.size; i++) {
		for (int j = 0; j < a.size; j++) {
			m << a.arr[i][j] << " ";
		}
	}
	return m;
}
