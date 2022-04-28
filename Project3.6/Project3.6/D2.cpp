#include "D2.h"

D2::D2(int x, int y)
	: B2(y)
{
	d2 = x;
}

D2::~D2()
{}

void D2::show_D2()
{
	cout << "class D2" << endl;
	show_B2();
	cout << "show_D2(): " << d2 << endl;
}
