#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>
using namespace std;

void Input(vector<int>& v)
{
	int tmp;
	cin >> tmp;
	while (tmp >= 0) {
		v.push_back(tmp);
		cin >> tmp;
	}
}

void Sort(vector<int>& A) {
	for (int i = 1; i < A.size(); i++) {
		int e = A[i];
		int pos;
		for (pos = i - 1; pos > -1; pos--) {
			if (A[pos] < e)
				break;
			A[pos + 1] = A[pos];
		}
		A[pos + 1] = e;
		cout << "i=" << i;
		cout << ":\tpos=" << A[pos + 1];
		cout << "\te=" << pos + 1 << endl;
		for (int i = 0; i < A.size(); i++)
			cout << A[i] << "\t";
		cout << endl;
	}
}

int main() {
	vector<int> A;
	Input(A);
	Sort(A);
	return 0;
}
