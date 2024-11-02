#include <iostream>
#include "CThuMuc.h"
using namespace std;

int main() {
	CThuMuc Folder1;
	Folder1.Nhap();
	Folder1.Xuat();
	cout << "Tong dung luong cua thu muc la: " << Folder1.TongDungLuong() << endl;
	cout << "So luong tap tin cua thu muc la: " << Folder1.DemTapTin() << endl;
	cout << "So luong thu muc la: " << Folder1.DemThuMuc() - 1 << endl;
	return 0;
}