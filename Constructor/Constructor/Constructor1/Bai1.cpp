#include <iostream>
using namespace std;

class Array {
private:
	int Num;
	int* Value;
public:
	//constructor
	Array() {
		cout << "Ham tao: " << this << endl;
	}
	Array(int a, int b, int c)
	{
		cout << "Ham tao: " << this << endl;
		Num = 3;
		Value = new int[Num];
		Value[0] = a;
		Value[1] = b;
		Value[2] = c;
	}
	//destructor
	friend istream& operator>>(istream&, Array&);
	friend ostream& operator<<(ostream&, Array);
	friend Array operator+(Array, Array);
};
istream& operator>>(istream& m, Array& a)
{
	m >> a.Num;
	a.Value = new int[a.Num];
	for (int i = 0; i < a.Num; i++)
		cin >> a.Value[i];
	return m;
}
ostream& operator<<(ostream& m, Array a)
{
	for (int i = 0; i < a.Num; ++i) {
		m << a.Value[i] << " ";
	}
	m << endl;
	return m;
}
Array operator+(Array A, Array B)
{
	Array C;
	int newNum = A.Num + B.Num;
	int* newValue = new int[newNum];
	int dem = 0;
	for (int i = 0; i < A.Num; ++i) {
		newValue[dem++] = A.Value[i];
	}
	for (int i = 0; i < B.Num; ++i) {
		newValue[dem++] = B.Value[i];
	}
	C.Num = newNum;
	C.Value = newValue;
	return C;
}

int main()
{
	Array a, b(2, 3, 5), c;
	cout << "Nhap phan tu: ";
	cin >> a;
	c = a + b;
	cout << "Xuat phan tu: ";
	cout << c;
	return 0;
}