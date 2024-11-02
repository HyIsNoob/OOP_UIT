#include "CMachDien.h"
#include "CMachSongSong.h"
#include "CMachNoiTiep.h"
#include "CDienTro.h"

void CDienTro::Nhap(){
	cout << "Nhap ma so: ";
	getline(cin, MaSo);	 cin.ignore();
	cout << "Nhap dien tro: ";
	cin >> DienTro; cin.ignore();
}

void CDienTro::Xuat(){
	cout << "Ma so la: " << MaSo << endl;
	cout << "Dien tro la: " << DienTro << endl;
}

float CDienTro::TinhDienTro(){
	return DienTro;
}