#include <iostream>
#include <string>
using namespace std;

class String {
private:
	char* str;
	int leng;
public:
	String() {}
	/*String(const String& a) {
		str = new char[leng];
		strcpy(str, a.str);
		leng = a.leng;
	}
	*/
	friend istream& operator>>(istream&, String&);
	friend ostream& operator<<(ostream&, String);
	friend String operator+(String, String);
};

istream& operator>>(istream& m, String& a) {
	return m;
}

ostream& operator<<(ostream& m, String a) {
	return m;
}


int main() {
	cout << "Hello World" << endl;
	//String a, b("DH UIT"), c;
	//String* d = new String[10];
	//String e(b);
	//cout << b;
	//cin >> a;
	//c = a + b; cout << c;
	//c += b; cout << c;
	//c = a; cout << c;
	//a = "DH CNTT"; cout << a << c;
	return 0;
}