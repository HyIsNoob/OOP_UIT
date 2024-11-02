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
	cout << "Hello";
}

int main() {
	vector<int> A;
	Input(A);
	Sort(A);
	return 0;
}
