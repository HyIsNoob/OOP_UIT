#include <iostream>
#include "CSoPhuc.h"
using namespace std;

int main()
{
	CSoPhuc sp1;
	CSoPhuc sp2(2, 3);
	CSoPhuc sp3(sp1);
	sp1 = sp2;
	return 1;
}