#include <iostream>
#include "CNgay.h"
using namespace std;

int main()
{
	CNgay A;
	CNgay B(1, 3, 2005);
	CNgay C(B);
	A = B;
	return 1;
}