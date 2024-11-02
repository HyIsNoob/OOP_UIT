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

void QuickSort(vector<int>& a, int left, int right) {
	if (left >= right)
		return;
	int pivot = a[(left + right) / 2];
	int i, j;
	i = left, j = right;
	cout << "[" << left << " - " << right << "]: ";
	cout << "pivot=" << pivot;
	while (i < j) {
		while (a[i] > pivot)
			i++;
		while (a[j] < pivot)
			j--;
		if (i <= j) {
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	cout << endl;
	QuickSort(a, left, j);
	QuickSort(a, i, right);
}

void Sort(vector<int>& A) {
	if (A.size() != 0)
		QuickSort(A, 0, A.size() - 1);
}

int main() {
	vector<int> A;
	Input(A);
	Sort(A);
	return 0;
}

