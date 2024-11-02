#include <iostream>
#include "CHinhCau.h"
using namespace std;

int main()
{
	CHinhCau S1;
	CHinhCau S2(CDiemKhongGian(1, 2, 3), 4);
	CHinhCau S3(S2);
	return 1;
}