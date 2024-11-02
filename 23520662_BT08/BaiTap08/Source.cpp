#include <iostream>
#include "CMay.h"
using namespace std;

int main() {
	CMay M;
	
	M.Nhap();
	M.Xuat();
	
	cout << "Gia tien cua may: " << M.TinhGiaTien() << endl;

	string ms;
	cin.ignore();
	cout << "Nhap ma so cua chi tiet can tim: ";
	getline(cin, ms);
	CChiTiet* kq = M.TimKiem(ms);
	if (kq != NULL) {
		cout << "Tim thay !!" << endl;
		kq->Xuat();
	}
	else
		cout << "Khong tim thay!" << endl;

	cout << "So luong chi tiet don cua may: " << M.DemChiTietDon() << endl;
	return 1;
}