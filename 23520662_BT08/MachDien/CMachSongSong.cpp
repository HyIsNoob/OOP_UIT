#include "CMachDien.h"
#include "CMachSongSong.h"
#include "CMachNoiTiep.h"
#include "CDienTro.h"

void CMachSongSong::Nhap(){
	int loai;
	cout << "Nhap so luong mach dien con cua mach song song: ";
	cin >> n; cin.ignore();
	for(int i  =0 ; i < n; i++){
		cout << "Nhap mach dien con thu: " << i+1 << ":";
		cout << "Nhap loai (0.SongSong, 1.NoiTiep, 2.DienTro): ";
		cin >> loai; cin.ignore();
		switch(loai){
			case 0:
				ds[i] = new CMachSongSong;
				break;
			case 1:
				ds[i] = new CMachNoiTiep;
				break;
			default:
				ds[i] = new CDienTro;
				break;
		}
		ds[i]->Nhap();
	}
}

void CMachSongSong::Xuat(){
	cout << "Danh sach cac mach con song song la: " << endl;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}

float CMachSongSong::TinhDienTro(){
	int S = 0;
	cout << "Dien tro cua mach noi tiep la: ";
	for(int i = 0 ; i < n; i++)
		S = S + 1/ds[i]->TinhDienTro();
	return 1/S;
}