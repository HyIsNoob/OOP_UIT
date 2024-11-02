#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
	int gio;
	int phut;
	int giay;
public:
	Time() {
		gio = 0;
		phut = 0;
		giay = 0;
	}
	Time(const int& gio1, const int& phut1, const int& giay1) {
		gio = gio1;
		phut = phut1;
		giay = giay1;
	}
	friend istream& operator>>(istream&, Time&);
	friend ostream& operator<<(ostream&, Time);
	Time& operator++(int) {
		if (this->giay == 59) {
			if (this->phut == 59) {
				this->gio++;
				this->giay = this->phut = 0;
			}
			else {
				this->phut++;
				this->giay = 0;
			}
		}
		else
			this->giay++;
		return *this;
	}
	Time& operator--(int) {
		if (this->giay == 0) {
			if (this->phut == 0) {
				this->gio--;
				this->phut = this->giay = 59;
			}
			else {
				this->phut--;
				this->giay = 59;
			}
		}
		else
			this->giay--;
		return *this;
	}
	Time operator+(const Time& a) const {
		int H, M, S;
		if (this->giay + a.giay > 59) {
			S = this->giay + a.giay - 60;
			if (this->phut + a.phut + 1 > 59) {
				M = this->phut + a.phut - 60 + 1;
				H = this->gio + a.gio + 1;
			}
			else {
				M = this->phut + a.phut + 1;
				H = this->gio + a.gio;
			}
		}
		else if (this->phut + a.phut > 59) {
			S = this->giay + a.giay;
			M = this->phut + a.phut - 60;
			H = this->gio + a.gio + 1;
		}
		else {
			S = this->giay + a.giay;
			M = this->phut + a.phut;
			H = this->gio + a.gio;
		}
		Time temp(H, M, S);
		return temp;
	}
	Time operator-(const Time& a) const {
		int H, M, S;
		if (this->giay - a.giay < 0) {
			S = 60 + (this->giay - a.giay);
			if (this->phut - a.phut - 1 < 0) {
				M = 60 + (this->phut - a.phut - 1);
				H = (this->gio - a.gio - 1);
			}
			else {
				M = this->phut - a.phut - 1;
				H = this->gio - a.gio;
			}
		}
		else if (this->phut - a.phut < 0) {
			S = this->giay - a.giay;
			M = (this->phut - a.phut) + 60;
			H = this->gio - a.gio - 1;
		}
		else {
			S = this->giay - a.giay;
			M = this->phut - a.phut;
			H = this->gio - a.gio;
		}
		Time temp(H, M, S);
		return temp;
	}
	bool operator==(const Time& a) const {
		if (this->gio == a.gio && this->phut == a.phut && this->giay == a.giay)
			return true;
		else
			return false;
	}
	bool operator<(const Time& a) const {
		if (this->gio < a.gio)
			return true;
		else if (this->gio == a.gio && this->phut < a.phut)
			return true;
		else if (this->gio == a.gio && this->phut == a.phut && this->giay < a.giay)
			return true;
		else
			return false;
	}
	bool operator>(const Time& a) const {
		if (this->gio > a.gio)
			return true;
		else if (this->gio == a.gio && this->phut > a.phut)
			return true;
		else if (this->gio == a.gio && this->phut == a.phut && this->giay > a.giay)
			return true;
		else
			return false;
	}
	Time& operator+=(int a) const {
		Time Temp(gio, phut, giay);
		while (a > 60) {
			a = a - 60;
			Temp.phut++;
			if (Temp.phut == 60) {
				Temp.phut = 0;
				Temp.gio++;
			}
		}
		Temp.giay += a;
		return Temp;
	}
	int operator[](int a) const {
		if (a < 0 || a > 2)
			out_of_range("Out of range");
		switch (a) {
		case 0:
			return gio;
			break;
		case 1:
			return phut;
			break;
		case 2:
			return giay;
			break;
		}
	}
	Time& operator+(int a) const {
		Time Temp(gio, phut, giay);
		while (a > 60) {
			a = a - 60;
			Temp.phut++;
			if (Temp.phut == 60) {
				Temp.phut = 0;
				Temp.gio++;
			}
		}
		Temp.giay += a;
		return Temp;
	}
	friend Time operator+(const int& other1, const Time& other2) {
		return Time(0, 0, other1) + other2;
	}
};

istream& operator>>(istream& m, Time& A) {
	m >> A.gio >> A.phut >> A.giay;
	return m;
}

ostream& operator<<(ostream& m, Time A) {
	m << setw(2) << setfill('0') << A.gio;
	m << ":" << setw(2) << setfill('0') << A.phut;
	m << ":" << setw(2) << setfill('0') << A.giay;
	return m;
}

int main() {
	Time t1(3, 29, 9), t2;
	cin >> t2;
	cout << t1 << " " << t1-- << endl;
	cout << t2 << " " << t2++ << endl;
	cout << (t1 + t2 == t2 + t1) << endl << (t1 - t2 < t2 - t1) << endl << (t1 - t2 > (t2 += 2)) << endl;
	cout << 5 + t1 << endl << t2 + 2 << endl;
	cout << t2 << endl << t2[2] << endl;
	return 0;
}
