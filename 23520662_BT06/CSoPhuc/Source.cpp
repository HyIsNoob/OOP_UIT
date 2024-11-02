#include <iostream>
#include "CSoPhuc.h"
using namespace std;

int main() {
	CSoPhuc A, B(2, 3);
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
	return 0;
}