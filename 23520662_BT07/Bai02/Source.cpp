#include <iostream>
#include "CHonSo.h"
using namespace std;

int main() {
	CHonSo A, B;
	cin >> A >> B;
	cout << A << B;
	cout << "Lon Hon: " << (A > B) << endl;
	cout << "Nho Hon: " << (A < B) << endl;
	cout << "Nho Hon Bang: " << (A <= B) << endl;
	cout << "Lon Hon Bang: " << (A >= B) << endl;
	cout << "Bang: " << (A == B) << endl;
	cout << "Khac: " << (A != B) << endl;
	return 0;
}