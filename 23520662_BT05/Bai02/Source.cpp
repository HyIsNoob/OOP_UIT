#include <iostream>
#include "CDiemKhongGian.h"
using namespace std;

int main()
{
	CDiemKhongGian P;
	CDiemKhongGian Q(1, 2, 3);
	CDiemKhongGian R(P);
	P = Q;
	return 1;
}