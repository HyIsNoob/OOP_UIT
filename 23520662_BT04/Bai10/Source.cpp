#include <iostream>
#include "CDiem.h"
#include "CDuongTron.h"
using namespace std;

int main()
{
	CDuongTron C1;
	CDuongTron C2(CDiem(1, 2), 3);
	CDuongTron C3(C1);
	return 1;
}