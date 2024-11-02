#include <iostream>
#include <string>
using namespace std;

struct date
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct date DATE;

void Nhap(DATE&);
void NgayTiepTheo(DATE);
int SoNgayTrongThang(DATE);
bool isNamNhuan(DATE);

int main()
{
	string answer = "Yes";
	while (answer == "Yes" || answer == "yes") {
		DATE a;
		Nhap(a);
		NgayTiepTheo(a);
		cout << endl;
		cout << "Ban co muon lam lai khong? (Yes/No) \n";
		cin >> answer;
	}
	cout << "Xin chao tam biet ><";
}

void Nhap(DATE& a)
{
	cout << "Nhap ngay: ";
	cin >> a.Ngay;
	cout << "Nhap thang: ";
	cin >> a.Thang;
	cout << "Nhap nam: ";
	cin >> a.Nam;
}

bool isNamNhuan(DATE a)
{
	if ((a.Nam % 4 == 0 && a.Nam % 100 != 0) || a.Nam % 400 == 0)
		return true;
	return false;
}

int SoNgayTrongThang(DATE a)
{
	int SoNgay[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (isNamNhuan(a) == true && a.Thang == 2)
		return 29;
	else
		return SoNgay[a.Thang - 1];
}


void NgayTiepTheo(DATE a)
{
	if (a.Ngay > 0 && a.Thang > 0 && a.Nam > 0)
		if (a.Ngay <= SoNgayTrongThang(a) && a.Thang <= 12)
		{
			if (a.Ngay == SoNgayTrongThang(a) && a.Thang == 12)
				cout << "1/1/" << a.Nam + 1;
			else if (a.Ngay == SoNgayTrongThang(a))
				cout << "1/" << a.Thang + 1 << "/" << a.Nam;
			else
				cout << a.Ngay + 1 << "/" << a.Thang << "/" << a.Nam;
		}
		else
			cout << "Ngay ban nhap khong hop le\n";
	else
		cout << "Ngay ban nhap khong hop le\n";
}
