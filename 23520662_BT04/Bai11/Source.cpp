#include <iostream>
#include "CTamGiac.h"
#include "CDiem.h"
using namespace std;

int main()
{
	CTamGiac tg1;
	CTamGiac tg2(CDiem(1, 2), CDiem(3, 4), CDiem(5, 6));
	CTamGiac tg3(tg1);
	return 1;
}