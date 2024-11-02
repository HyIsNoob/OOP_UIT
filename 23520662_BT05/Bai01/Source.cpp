#include <iostream>
#include "CDiem.h"
using namespace std;

int main()
{
	CDiem P;
	CDiem Q(1, 2);
	CDiem R(Q);
	P = Q;
	return 1;
}