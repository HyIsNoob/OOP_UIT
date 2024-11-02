#include "CPhanSo.h"

bool CPhanSo::operator>(const CPhanSo& ps) {
	float temp1 = (float)Tu / (float)Mau;
	float temp2 = (float)ps.Tu / (float)ps.Mau;
	if (temp1 > temp2)
		return true;
	return false;
}

bool CPhanSo::operator<(const CPhanSo& ps) {
	float temp1 = (float)Tu / (float)Mau;
	float temp2 = (float)ps.Tu / (float)ps.Mau;
	if (temp1 < temp2)
		return true;
	return false;
}

bool CPhanSo::operator>=(const CPhanSo& ps) {
	float temp1 = (float)Tu / (float)Mau;
	float temp2 = (float)ps.Tu / (float)ps.Mau;
	if (temp1 >= temp2)
		return true;
	return false;
}

bool CPhanSo::operator<=(const CPhanSo& ps) {
	float temp1 = (float)Tu / (float)Mau;
	float temp2 = (float)ps.Tu / (float)ps.Mau;
	if (temp1 <= temp2)
		return true;
	return false;
}

bool CPhanSo::operator==(const CPhanSo& ps) {
	float temp1 = (float)Tu / (float)Mau;
	float temp2 = (float)ps.Tu / (float)ps.Mau;
	if (temp1 == temp2)
		return true;
	return false;
}

bool CPhanSo::operator!=(const CPhanSo& ps) {
	float temp1 = (float)Tu / (float)Mau;
	float temp2 = (float)ps.Tu / (float)ps.Mau;
	if (temp1 != temp2)
		return true;
	return false;
}

istream& operator>>(istream& is, CPhanSo& ps) {
	cout << "Nhap tu: ";
	is >> ps.Tu;
	cout << "Nhap mau: ";
	is >> ps.Mau;
	return is;
}

ostream& operator<<(ostream& os, CPhanSo ps) {
	os << ps.Tu;
	cout << "/";
	os << ps.Mau;
	cout << endl;
	return os;
}