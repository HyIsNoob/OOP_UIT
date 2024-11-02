#include "CMachDien.h"
#include "CMachSongSong.h"
#include "CMachNoiTiep.h"
#include "CDienTro.h"

void NhapMach(CMachDien*);

int main(){
	CMachDien* M;
	NhapMach(M);
	cout << "Dien tro cua mach la: " << endl;
	M->TinhDienTro();
}

void NhapMach(CMachDien* M){
	int loai;
	cout << "Nhap mach dien: ";
	cout << "Nhap loai (0.SongSong, 1.NoiTiep, 2.DienTro): ";
	cin >> loai; cin.ignore();
	switch(loai){
		case 0:
			M = new CMachSongSong;
			break;
		case 1:
			M = new CMachNoiTiep;
			break;
		default:
			M = new CDienTro;
			break;
	}
	M->Nhap();
}