#include <iostream>
#include "CDaThuc.h"
using namespace std;

int main() {
	CDaThuc F1, F2;
	cout << "Nhap da thuc 1: ";
	cin >> F1;
	cout << F1;
	cout << "\nNhap da thuc 2: ";
	cin >> F2;
	cout << F2;
	CDaThuc Cong = F1 + F2;
	CDaThuc Tru = F1 - F2;
	CDaThuc Nhan = F1 * F2;
	CDaThuc Chia = F1 / F2;
	cout << "Da thuc cong: "; cout << Cong;
	cout << "Da thuc tru: "; cout << Tru;
	cout << "Da thuc Nhan: "; cout << Nhan;
	cout << "Da thuc Chia: "; cout << Chia;
	CDaThuc F;
	cout << "Da thuc cong bang: ";
	F = F1;
	F += F2;
	cout << F;
	cout << "Da thuc tru bang: ";
	F = F1;
	F -= F2;
	cout << F;
	cout << "Da thuc nhan bang: ";
	F = F1;
	F *= F2;
	cout << F;
	cout << "Da thuc chia bang: ";
	F = F1;
	F /= F2;
	cout << F;
	system("pause");
	return 0;
}