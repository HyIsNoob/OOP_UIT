#include <iostream>
#include "CCongTy.h"
using namespace std;

void TimKiemNhanVien(CCongTy);

int main() {
	CCongTy CongTy1;
	CongTy1.Nhap();
	CongTy1.Xuat();
	cout << endl << CongTy1.TongLuong() << endl << endl;
	TimKiemNhanVien(CongTy1);
	return 1;
}

void TimKiemNhanVien(CCongTy a) {
	string HT;
	cout << "Nhap ho ten nhan vien can tim: ";
	getline(cin, HT);
	CNhanVien* kq = a.TimKiem(HT);
	if (kq != NULL) {
		cout << "Nhan vien tim thay!!" << endl;
		kq->Xuat();
	}
	else
		cout << "Nhan vien khong ton tai!" << endl;
}