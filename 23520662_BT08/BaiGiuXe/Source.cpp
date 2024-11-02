#include "CBaiXe.h"

int main() {
	CBaiXe BaiXe;
	BaiXe.Nhap();
	BaiXe.Xuat();
	cout << "Tong tien thu duoc la: " << BaiXe.TongTien() << endl;
	cout << "So luong xe may co trong bai la: " << BaiXe.DemXeMay() << endl;
	return 1;
}