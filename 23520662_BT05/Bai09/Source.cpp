#include <iostream>
#include "CDuongThang.h"
using namespace std;

int main()
{
	CDuongThang d1;
	CDuongThang d2(1, 2);
	CDuongThang d3(d1);
	d1 = d2;
	return 1;
}