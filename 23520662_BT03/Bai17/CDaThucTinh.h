#include <iostream>
#include <vector>
using namespace std;

class CDaThucTinh {
private:
	std::vector<int> heSo;

public:
	CDaThucTinh() {}

	CDaThucTinh(const std::vector<int>& hs) : heSo(hs) {}

	friend istream& operator>>(istream&, CDaThucTinh&);
	friend ostream& operator<<(ostream&, CDaThucTinh);

};

istream& operator>>(istream& m, CDaThucTinh& a) {
	int n;
	cout << "Nhap bac cua da thuc: ";
	m >> n;

	a.heSo.resize(n + 1);

	cout << "Nhap cac he so cua da thuc, bat dau tu he so bac cao nhat:\n";
	for (int i = n; i >= 0; --i) {
		cout << "He so bac " << i << ": ";
		m >> a.heSo[i];
	}

	return m;
}

ostream& operator<<(ostream& m, CDaThucTinh a) {
	m << "Da thuc: ";
	for (int i = a.heSo.size() - 1; i > 0; --i) {
		if (a.heSo[i] != 0) {
			m << a.heSo[i] << "x^" << i << " + ";
		}
	}
	m << a.heSo[0] << std::endl;
	return m;
}
