#include <iostream>
#include "CPhanSo.h"
using namespace std;

int main() {
	CPhanSo A, B(2, 3);
	cin >> A;
	cout << A + B;
	cout << A - B;
	cout << A * B;
	cout << A / B;
	A += B;
	cout << A;
	A -= B;
	cout << A;
	A *= B;
	cout << A;
	A /= B;
	cout << A;
	cout << A++;
	cout << A--;
	return 0;
}