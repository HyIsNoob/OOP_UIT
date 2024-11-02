#pragma once
#include <iostream>
using namespace std;
class CMangDong
{
private:
	int size;
	int* arr = new int[size];
public:
	friend istream& operator>>(istream&, CMangDong&);
	friend ostream& operator<<(ostream&, CMangDong);
};

istream& operator>>(istream& m, CMangDong& a) {
	cout << "Nhap so luong: ";
	m >> a.size;
	cout << "Nhap cac phan tu cua mang:\n";
	for (int i = 0; i < a.size; i++) {
		cout << "arr[" << i + 1 << "]: ";
		m >> a.arr[i];
	}
	return m;
}

ostream& operator<<(ostream& m, CMangDong a) {
	cout << "Cac phan tu la: ";
	for (int i = 0; i < a.size; i++)
		m << a.arr[i] << " ";
	return m;
}
