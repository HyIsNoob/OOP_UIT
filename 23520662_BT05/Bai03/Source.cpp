#include <iostream>
#include "CPhanSo.h"
using namespace std;

int main()
{
	CPhanSo ps1;
	CPhanSo ps2(2, 4);
	CPhanSo ps3(ps1);
	ps1 = ps2;
	return 1;
}