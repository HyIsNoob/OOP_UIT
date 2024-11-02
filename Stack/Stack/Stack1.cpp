#include <iostream>
using namespace std;

class NODE {
public:
	int Data;
	NODE* pNext;

	NODE(int _data) {
		Data = _data;
		pNext = NULL;
	}
};

class Stack {
private:
	NODE* pHead;
public:
	Stack() { pHead = nullptr; }
	Stack(const Stack& s) {
		pHead = s.pHead;
	}
	bool isEmpty() {
		return (pHead == nullptr);
	}
	void push(int p) {
		NODE* a = new NODE(p);

		if (pHead == nullptr)
			pHead = a;
		else {
			a->pNext = pHead;
			pHead = a;
		}
	}
	int top() {
		return pHead->Data;
	}
	int pop() {
		if (pHead == nullptr)
			return -1;
		NODE* p = pHead;
		int temp = pHead->Data;
		pHead = pHead->pNext;
		delete p;
		return temp;
	}
	int size() {
		int dem = 0;
		if (pHead == nullptr)
			return 0;
		else
			for (NODE* i = pHead; i != NULL; i = i->pNext)
				dem++;
		return dem;
	}
	friend istream& operator>>(istream&, Stack&);
	friend ostream& operator<<(ostream&, Stack);
	Stack operator=(const Stack& a) {
		NODE* p = a.pHead;
		NODE* qq, * qTail = NULL, * q;
		while (p != nullptr) {
			q = new NODE(p->Data);
			if (qTail != nullptr)
				qTail->pNext = q;
			else {
				qTail = q;
				this->pHead = q;
			}
			p = p->pNext;
			qTail = q;
		}
		qTail->pNext = NULL;
		return *this;
	}
};

istream& operator>>(istream& m, Stack& a) {
	int temp;
	cin >> temp;
	while (temp != -1) {
		a.push(temp);
		cin >> temp;
	}
	return m;
}

ostream& operator<<(ostream& m, Stack a) {
	for (NODE* i = a.pHead; i != nullptr; i = i->pNext)
		m << i->Data << " ";
	return m;
}

Stack operator+(Stack x1, Stack x2) {
	for (NODE* i = )
		return x1;
}

int main() {
	Stack a;

	a.push(1);
	a.push(2);
	a.push(3);

	cout << a.top() << endl; a.pop();//3
	cout << a.top() << endl; a.pop();//2
	a.push(5); // s= 5, 1;
	Stack s1, s2;
	s2 = s1 = a;
	cout << a.top() << endl; a.pop();//5
	cout << a.top() << endl; a.pop();//1

	s1.push(4);
	cout << s1.top() << endl; s1.pop();//4
	cout << s1.top() << endl; s1.pop();//5

	s2.push(5);
	cout << s2.top() << endl; s2.pop();//5
	cout << s2.top() << endl; s2.pop();//5
	cout << s2.top() << endl; s2.pop();//1

	cin >> s2;//4 5 6 7 9
	//s2 = s2 + s1;
	cout << s2;//4 5 6 7 9 1
	return 0;
}