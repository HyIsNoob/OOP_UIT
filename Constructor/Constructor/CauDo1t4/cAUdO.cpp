#include <iostream>
#include <string>
using namespace std;

class String {
private:
	string str;
public:
	friend istream& operator>>(istream&, String&);
	friend ostream& operator<<(ostream&, String);
}
istream& operator>>(istream& m, String& a) {
	return m;
}

ostream& operator<<(ostream& m, String a) {
	return m;
}

int main() {
	cout << "Hello World" << endl;
}