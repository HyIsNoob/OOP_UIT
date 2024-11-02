#include "CHonSo.h"

bool CHonSo::operator>(const CHonSo& ps) {
	float temp1 = HeSo + (float)Tu / (float)Mau;
	float temp2 = ps.HeSo + (float)ps.Tu / (float)ps.Mau;
	if (temp1 > temp2)
		return true;
	return false;
}

bool CHonSo::operator<(const CHonSo& ps) {
	float temp1 = HeSo + (float)Tu / (float)Mau;
	float temp2 = ps.HeSo + (float)ps.Tu / (float)ps.Mau;
	if (temp1 < temp2)
		return true;
	return false;
}

bool CHonSo::operator>=(const CHonSo& ps) {
	float temp1 = HeSo + (float)Tu / (float)Mau;
	float temp2 = ps.HeSo + (float)ps.Tu / (float)ps.Mau;
	if (temp1 >= temp2)
		return true;
	return false;
}

bool CHonSo::operator<=(const CHonSo& ps) {
	float temp1 = HeSo + (float)Tu / (float)Mau;
	float temp2 = ps.HeSo + (float)ps.Tu / (float)ps.Mau;
	if (temp1 <= temp2)
		return true;
	return false;
}

bool CHonSo::operator==(const CHonSo& ps) {
	float temp1 = HeSo + (float)Tu / (float)Mau;
	float temp2 = ps.HeSo + (float)ps.Tu / (float)ps.Mau;
	if (temp1 == temp2)
		return true;
	return false;
}

bool CHonSo::operator!=(const CHonSo& ps) {
	float temp1 = HeSo + (float)Tu / (float)Mau;
	float temp2 = ps.HeSo + (float)ps.Tu / (float)ps.Mau;
	if (temp1 != temp2)
		return true;
	return false;
}

istream& operator>>(istream& is, CHonSo& ps) {
	cout << "Nhap he so: ";
	is >> ps.HeSo;
	cout << "Nhap tu: ";
	is >> ps.Tu;
	cout << "Nhap mau: ";
	is >> ps.Mau;
	return is;
}

ostream& operator<<(ostream& os, CHonSo ps) {
	os << ps.HeSo << " " << ps.Tu;
	cout << "/";
	os << ps.Mau;
	cout << endl;
	return os;
}