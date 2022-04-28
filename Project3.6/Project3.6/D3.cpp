#include "D3.h"

D3::D3(int x, int y, int z, int i, int j)
	: D1(y,z), D2(i,j)
{
	d3 = x;
}


D3::~D3()
{}

void D3::show_D3()
{
	cout << "class D3" << endl;
	show_D1();
	show_D2();
	cout << "show_D3(): " << d3 << endl;
}
