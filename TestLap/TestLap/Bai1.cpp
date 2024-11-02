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

void Heapify(vector<int>& a, int heapSize, int i, int& dem) {
	int left = (i * 2) + 1;
	int right = (i * 2) + 2;
	int max = i;
	if (left < heapSize && a[max] < a[left])
		max = left;
	if (right < heapSize && a[max] < a[right])
		max = right;
	if (max != i) {
		dem++;
		swap(a[max], a[i]);
		Heapify(a, heapSize, max, dem);
	}
}
void BuildHeap(vector<int>& a, int n, int& dem) {
	int heapSize = n;
	for (int i = n / 2 - 1; i >= 0; i--)
		Heapify(a, heapSize, i, dem);
}
void Sort(vector<int>& a) {
	int n = a.size();
	int HeapSize = n;
	int dem = 0;
	cout << "\nN=" << HeapSize << ":\t";
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
	cout << endl;
	BuildHeap(a, HeapSize, dem);
	cout << "swap: " << dem << endl;
	for (int i = n - 1; i > 0; i--) {
		swap(a[0], a[i]);
		HeapSize = HeapSize - 1;
		dem = 0;
		cout << "\nN=" << HeapSize << ":\t";
		for (int i = 0; i < a.size(); i++)
			cout << a[i] << "\t";
		cout << endl;
		Heapify(a, HeapSize, 0, dem);
		cout << "swap: " << dem << endl;
	}
}


int main() {
	vector<int> A;
	Input(A);
	Sort(A);
	return 0;
}

