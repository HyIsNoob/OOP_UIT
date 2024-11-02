#include <iostream>
#include "CDonThuc.h"
using namespace std;

int main() {
	CDonThuc A, B(2, 3);
	cin >> A;
	cout << A * B;
	cout << A / B;
	A *= B;
	cout << A;
	A /= B;
	cout << A;
	return 0;
}