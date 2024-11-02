#include <iostream>
#include <vector>
using namespace std;
class CDaThucDong {
private:
	int* heSo;
	int bac;

public:
	CDaThucDong() : heSo(nullptr), bac(0) {}

	CDaThucDong(const std::vector<int>& hs) : bac(hs.size() - 1) {
		heSo = new int[bac + 1];
		for (int i = 0; i <= bac; ++i) {
			heSo[i] = hs[i];
		}
	}

	friend std::istream& operator>>(std::istream& is, CDaThucDong& dt) {
		std::cout << "Nhap bac cua da thuc: ";
		is >> dt.bac;

		dt.heSo = new int[dt.bac + 1];

		std::cout << "Nhap cac he so cua da thuc, bat dau tu he so bac cao nhat:\n";
		for (int i = dt.bac; i >= 0; --i) {
			std::cout << "He so bac " << i << ": ";
			is >> dt.heSo[i];
		}

		return is;
	}

	friend std::ostream& operator<<(std::ostream& os, const CDaThucDong& dt) {
		os << "Da thuc: ";
		for (int i = dt.bac; i >= 0; --i) {
			if (dt.heSo[i] != 0) {
				os << dt.heSo[i] << "x^" << i;
				if (i > 0) {
					os << " + ";
				}
			}
		}
		os << std::endl;
		return os;
	}
};
